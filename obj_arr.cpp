#include<iostream>
using namespace std;

//Array of objects

class Employee {
	
	int id ;
	int salary ;
	
	public:
		
		void setID(void) {
			
			salary=122;
			cout << "Enter ID of employee : " << endl;
			cin >> id;
			
		}
		
		void getID(void) {
			
			cout << "The ID of employee is : " << id << endl;
			
		}
};

int main () {
	
	
	/*
	Employee addy;     Usual way of using classes and objects & it's methods.
	addy.setID();
	addy.getID();
	*/
	
	Employee fb[4];       //Array of 4 objects.
	
	for (int i = 0; i < 4; i++){
		fb[i].setID();
		fb[i].getID();
	}
	
	return 0;
	
}

