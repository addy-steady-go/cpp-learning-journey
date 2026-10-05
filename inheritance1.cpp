#include <iostream>
using namespace std;

//Inheritance - A feature of OOPS , used to increase the reusability of the code.
//Types - Single , multiple , hybrid , hierarchial and multilevel.
//Existing class - Base class & Inherited class - Derived class.

/*
private members are never inherited.
private visibility mode : public members of base class become private members of derived class.
public visibility mode : public members of base class become public members of derived class.
*/

class Employee{
	public:
		int id;
		float salary;
		
		Employee(int inpID) {
			id = inpID;
			salary = 34;
		}
		
		Employee(){}
};

class Programmer : public Employee {        //Syntax of derived class.
	public:
		int languageCode = 9;
		
		Programmer(int inpID) {
			id = inpID;
		}
		
		void getData() {
			cout << id << endl;
		}
};

int main() {
	Employee harry(1) , rohan(2);
	cout << harry.salary << endl;
	cout << rohan.salary << endl;
	
	Programmer skillF(1);
	cout << skillF.languageCode << endl;
	skillF.getData();
	
	return 0;
}
