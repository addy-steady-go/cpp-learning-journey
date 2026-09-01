#include<iostream>
using namespace std;
int main(){
	//variables-->containers to store data
	//data types-->specifies the type pf data a variable can hold 
	//we will see the different data types
	//int,float,double,char & boolean are basic data types in C++
	// a,b,c etc. are the variables that hold the value
	
	int a = 1; //holds integer values
	float b = 1.1; //holds decimal values
	char c = 'd'; //holds char values , try to include only 1 alphabet for precised output
	double g = 1.1111; //holds bigger decimal values 
	bool is_true = true; //stores value in form of 0&1 where true=1 & false=0
	
	cout<<a<<endl<<b<<endl<<c<<endl<<g<<endl<<is_true<<endl;
	
	//endl is used to enter the next new line , we can also use \n for the same.
	
	//'<<' known as insertion operator
	//'>>' known as extraction operator
	
	return 0;
}
