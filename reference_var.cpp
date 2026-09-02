#include<iostream>
using namespace std;
int main(){
	//Reference Variables --> these are used in c++ to refer to the same value with different variable names.
	
	float x = 455;
	float & y = x; //this is how we declare reference variable 
	
	cout<<x<<endl;
	cout<<y;
	return 0;
}
