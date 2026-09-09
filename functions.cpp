#include<iostream>
using namespace std;

//Functions --> Functions are reusable blocks of code designed to perform specific tasks, enhancing modularity and reusability.  
//They consist of a return type, function name, and parameter list, followed by a function body enclosed in curly braces.


int sum (int a , int b){
	
	int c = a + b ; // Formal Parameters 
	
	return c;
}

int main(){
	
	int num1 , num2; // Actual parameters
	
	cout<<"Enter first number : " << endl ;
	cin >> num1;
	
	cout<<"Enter second number : "<< endl ;
	cin >> num2;
	
	cout<< "The sum is : " << sum(num1,num2) << endl ;
	
	return 0;
	
}
