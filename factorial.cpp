#include <iostream>
using namespace std ;

//Recursion - A function that calls itself until the base condition is met.
//It is not idle to use recursion for every problem.

//Factorial - 3! = 3*2*1
//0! = 1
//1! = 1

int factorial (int n) {
	
	if (n<=1){
		return 1;
	}
	
	return n*factorial(n-1);
}

int main () {
	int a;
	cout << "Enter any number : " << endl;
	cin >> a;
	
	cout << "The factorial of the number is : " << factorial(a) << endl;
	
	return 0;
}
