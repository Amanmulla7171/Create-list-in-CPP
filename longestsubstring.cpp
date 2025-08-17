#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestUniqueSubstring(const string& str) {
    unordered_map<char, int> lastIndex;
    int maxLength = 0, start = 0;

    for (int i = 0; i < str.length(); i++) {
        if (lastIndex.find(str[i]) != lastIndex.end() && lastIndex[str[i]] >= start) {
            start = lastIndex[str[i]] + 1;
        }
        lastIndex[str[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }
    return maxLength;
}

int main() {
    string input = "abcabcbb";
    cout << "Length of longest substring without repeating characters: "
         << longestUniqueSubstring(input) << endl;
    return 0;
}
