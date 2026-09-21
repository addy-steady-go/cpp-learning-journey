#include <iostream>
using namespace std;

class Complex {
	
	int a,b;
	
	public:
		Complex(int x, int y);
		
		void printNumber() {
			cout << "Your Number is " << a << "+" << b << "i" << endl;
		}
};


Complex::Complex(int x, int y) {    //Parameterized constructor
	
	a = x;
	b = y;
	
}

int main () {
	
	Complex a(4,6);   //Implicit Call
	
	Complex b = Complex (5,7);    //Explicit Call
	
	a.printNumber();
	b.printNumber();
	
	return 0;
} 
