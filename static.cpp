#include <iostream>
using namespace std;

//Static Data Members - These are the variables which are attached with the class , and become property of class.
//They initialize with 0 when the first object is created.

//Static Functions - Accessed using class name & scope res. operator.
//Have access only to other static functions and static data members or variables.

class Employee{
	
	int id;
	static int count;   // declaration of static data member.
	
	public:
		
		void setData(void) {
			cout << "Enter the id : " << endl;
			cin >> id;
			
			count++;
		}
		
		void getData(void) {
			
			cout <<"The ID of the employee is : " << id << " and the employee number is : " << count << endl;
			
		}
	
		static void getCount(void) {                     //Static function
			
			//cout << id; this will give an error as id is not static.
			
			cout << "The value of count is : " << count << endl;
		}
};

int Employee :: count;     //default value is zero and count is a static data member, we can also set the value of count here.						

int main () {
	
	Employee addy ,harry;
	
	addy.setData();
	addy.getData();
	Employee::getCount();   //This is how we use static functions.
	
	harry.setData();
	harry.getData();
	Employee::getCount();
	
	return 0;
	
}
