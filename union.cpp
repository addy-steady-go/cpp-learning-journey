#include <iostream>
using namespace std;

//Union - special class type that holds only one of it's data members at a time , space is allocated acc to the biggest data type.

union money {
	
	int rice;
	char car;
	float pounds;
	
};

int main(){
	
	union money m1;
	m1.rice = 33;
	cout<<m1.rice<<endl;
	
	//Displays only one value at a time , shares memory and helps in memory management.
	
	return 0;
}
