#include<iostream>
using namespace std;

int c = 45; //Global Variable

int main(){
	int a = 5, b = 10 , c; //Local Variables
	
	c = a+b; 
	cout<<c<<endl; //This will print local variable c as it is given more preference
	
	cout<<::c; //Scope Resolution Operator used to print global variable
	
	return 0;
}
