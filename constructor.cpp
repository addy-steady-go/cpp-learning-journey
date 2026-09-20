#include <iostream>
using namespace std;

class Complex {
	
	//Constructors - It's a special member function and has the same name as of the class.
	//It is automatically invoked when an object is created.
	//Declared in the public section of class.
	//It can have default arguments but does not have a return type.
	//We can not refer to address of a constructor.
	
	int a,b;
	
	public:
		
		Complex(void); //Constructor declaration.
		
		void printNumber() {
			cout << "Your number is " << a << "+" << b << "i" << endl;
		}
		
};

Complex ::Complex (void) {          //default constructor
	
	a=10;
	b=7;         //Constructor defined.
	
}

int main () {
	
	Complex c1;
	c1.printNumber();
	
	return 0;
}
