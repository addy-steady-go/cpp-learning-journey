#include<iostream>
using namespace std;

//Function overloading - Same function name but different parameters.

int add (int a , int b) {
	
	cout <<"Adding with 2 arguments " << endl;
	return a+b;
}

int add (int a , int b , int c) {
	
	cout <<"Adding with 3 arguments " << endl;
	return a+b+c;
}

int volume (int a) {
	
	cout << "Volume of Cube is : " ;
	return (a*a*a);
}

int volume (int l , int b , int h) {
	
	cout << "Volume of cuboid is : ";
	return (l*b*h);
}

int main () {
	
	cout << "Sum of 1 and 2 is : " << add(1,2) << endl;
	cout << "Sum of 1 , 2 and 3 is : " << add(1,2,3) << endl;
	cout << volume (3) << endl ;
	cout << volume (1,2,3) << endl ;
	
	return 0;
}
