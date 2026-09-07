#include<iostream>
using namespace std;
int main(){
	
	//Pointers and arrays
	
	int marks[3] = {99,85,77};
	
	int*p = marks; // pointer p created for array marks.
	
	cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+2)<<endl;
	
	cout<<*(p++)<<endl;
	cout<<*(++p)<<endl;
	
	return 0 ;
	
	
}
