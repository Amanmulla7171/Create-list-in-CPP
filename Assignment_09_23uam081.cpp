#include<iostream>
using namespace std;

template<typename T>


T findMax(T a, T b){
	return (a>b)?a:b;
}

//Class Calculator
template<typename T>
class Calculator{
	private:
		T x;
		T y;
	public:
		Calculator(T p, T q){
			x = p;
			y = q;
		}
		// Function of addition	
		T addition(){
			return x+y;
		}
		// Function of subtraction
		T subtraction(){
			return x-y;
		}
		// Function of multiplication
		T multiplication(){
			return x*y;
		}
		// Function of division
		T division(){
			if(y == 0){
				cout<<"Error: Division by zero!"<<endl;
				return 0;
			}
			return x/y;
		}
};
int main(){
	int a= 5, b = 7;
	cout<<"Max of "<<a<<" and "<<b<<" is: "<<findMax(a,b)<<endl;
	
	cout<<"For integers: "<<endl;
	
	Calculator<int> c(23,0);
	cout <<"Addition: "<<c.addition()<<endl;
    cout <<"Subtraction: "<<c.subtraction()<<endl;
    cout <<"Multiplication: "<<c.multiplication()<<endl;
    cout <<"Division: " <<c.division()<<endl;
    
    cout<<"\nFor float: "<<endl;
    
    Calculator<float> c1(15.7,23.5);
	cout <<"Addition: "<<c1.addition()<<endl;
    cout <<"Subtraction: "<<c1.subtraction()<<endl;
    cout <<"Multiplication: "<<c1.multiplication()<<endl;
    cout <<"Division: " <<c1.division()<<endl;
    
    cout<<"\nFor double: "<<endl;
    
    Calculator<double> c2(13.34, 11.43);
	cout <<"Addition: "<<c2.addition()<<endl;
    cout <<"Subtraction: "<<c2.subtraction()<<endl;
    cout <<"Multiplication: "<<c2.multiplication()<<endl;
    cout <<"Division: " <<c2.division()<<endl;
}

