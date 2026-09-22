#include <iostream>
using namespace std;

//Constructor Overloading - Having multiple constructors in a class, which are invoked according to the arguments passed in the program.


class Complex {
	
	int a,b;
	
	public:
	Complex(int x , int y) {  //Parameterized Constructor
		
		a=x;
		b=y;
		
	}
	
	Complex(int x) {  //Parameterized Constructor
		
		a=x;
		b=0;
		
	}
	
	Complex(void) {   //Default Constructor
		
		a=0;
		b=0;
		
	}
	
	void printNumber() {
		
		cout << "Your number is : " << a << "+" << b << "i" << endl;
	}
};


int main () {
	
	Complex C1 (4,5);
	Complex C2 (7);
	Complex C3;
	
	C1.printNumber();
	
	C2.printNumber(); 
	
	C3.printNumber();
	
	return 0;
}
