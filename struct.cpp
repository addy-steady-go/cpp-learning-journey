#include<iostream>
using namespace std;

//Struct - user defined compound , groups variables of different types into single entity.

struct employee {
	
	int eID;
	char favChar;
	float salary;
	
};

int main(){
	
	struct employee addy;
	
	addy.eID = 7;
	addy.favChar = 'A';
	addy.salary = 1200000;
	
	cout<<addy.eID<<endl<<addy.favChar<<endl<<addy.salary<<endl;
	
	/*typedef struct employee{
	---
		}ep;
		
	now we can just write ep in place of struct employee in future code for convenience.	
		
	*/
	return 0 ;
}
