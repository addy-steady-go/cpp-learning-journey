#include <iostream>
using namespace std;

//Fibonacci series --> 1,1,2,3,5,8---
// n term = (n-1) + (n-2)

int fib( int n){
	
	if(n<2){
		return 1;
	}
	
	return fib(n-2) + fib(n-1);
}

int main () {
	
	int a ;
	cout << "Enter any number : " << endl;
	cin >> a;
	
	cout <<"The fibonacci series is : " << fib(a) << endl ;
	
	return 0;
}
