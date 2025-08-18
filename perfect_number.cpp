#include <iostream>

bool isPerfectNumber(int num) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    int number = 28;
    if (isPerfectNumber(number)) {
        std::cout << number << " is a Perfect Number." << std::endl;
    } else {
        std::cout << number << " is not a Perfect Number." << std::endl;
    }
    return 0;
}
