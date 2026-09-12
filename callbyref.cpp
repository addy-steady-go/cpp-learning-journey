#include <iostream>
using namespace std;

// Call by reference-The call by reference method of passing arguments to a function copies the reference of an arg. into the formal parameter


/*
void swap(int a , int b){
	int temp = a;
	a=b;
	b=temp;
}

THIS function will not swap the values.
*/


//Call by reference using pointers

void swapPointer(int* a , int* b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	//this will swap the values
}

//Call by reference using reference variable - &

void swapRefVar(int &a , int &b){
	
	int temp = a;
	a = b;
	b = temp;
	//this will also swap the values
}

int main () {
	
	int x = 4 , y = 5;
	swapRefVar(x,y);
	
	cout<<"Value of x is : " << x << endl << "Value of y is : " << y << endl;
	
	return 0;
}
