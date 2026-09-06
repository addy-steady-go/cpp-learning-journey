#include<iostream>
using namespace std;
int main(){
	
	//Pointers in C++ - data type which holds address of other data type.
	// & - address of operator used to store the address.
	// * - value at or dereference operator used to store the value.
	
	int a = 3 ;
	int* b = &a ;
	
	cout<<"The address of a is : " << &a << endl;
	cout<<"The address of a is : " << b << endl;
	cout<<"The value of a is : " << *b << endl;
	
	int** c = &b ; //Pointer to a pointer 
	
	return 0;
}
