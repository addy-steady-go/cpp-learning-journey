#include <iostream>
using namespace std;

class Simple {
	
	int data1 , data2;
	
	public:
		
		Simple(int a , int b = 2) {   //Constructor with default arguments
			data1 = a;
			data2 = b;
			
		}
		
		void printData(); 
};

void Simple::printData() {
	cout << "The value of data1 and data2 is : " << data1 << "," << data2 << endl;
}

int main() {
	
	Simple s(2,7);
	s.printData();
	
	return 0;
}
