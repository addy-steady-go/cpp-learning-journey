#include <iostream>
using namespace std;

//Protected access specifier in C++.

class Base {
	protected:
		int a;
		
	private:
		int b;
};

class Derived : protected Base {
	
};

int main () {
	Base b;
	Derived d;
	//cout << b.a;  , this will not work as 'a' is protected in base as well as derived class. 
	return 0;
}
