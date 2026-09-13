#include <iostream>
using namespace std;

//Inline Function - Used when there is less line of code in a function to exectue , improves memory management and also speed of program.
//Do not use inline function with recursion and static values.

inline int product (int a , int b) {  //declared using inline keyword.
	return a*b;
}

int main () {
	
	int a , b;
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	cout << "The product of numbers is : " << product(a,b) << endl;
	
	return 0;
}

/*
Static values
int product (int a , int b){
static int c = 0;
c = c+1;
return a*b+c;
}
*/

