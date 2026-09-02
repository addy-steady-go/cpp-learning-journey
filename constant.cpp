#include<iostream>
#include<iomanip> //New header file used for manipulation in c++
using namespace std;

int main(){
	//Constant variable and setw using <iomanip>
	
	int a = 3;
	cout<<a<<endl;
	
	a=45; //we can change value of normal variables
	cout<<a<<endl;
	
	const int b = 33; //const is used to create constant variable so that value can not change further in program.
	cout<<b<<endl;
	
	cout<<setw(3)<<a<<endl;
	cout<<setw(3)<<b<<endl;
	
	//set w is used to set width of spaces before printing the variable
	
	return 0;
}
