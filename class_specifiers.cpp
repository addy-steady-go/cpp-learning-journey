#include<iostream>
using namespace std;

class Employee {
	
	private:
		int a , b , c ;
		
	public:
		int d , e ;
		
	void setData(int a1 , int b1 , int c1);  //Declaration of a function.
	
	void getData(){
		cout<< "The value of a is : " << a << endl;
		cout<< "The value of b is : " << b << endl;
		cout<< "The value of c is : " << c << endl;
		cout<< "The value of d is : " << d << endl;
		cout<< "The value of e is : " << e << endl;
 	}
};

void Employee :: setData(int a1 , int b1 , int c1) {
	a = a1;
	b = b1;               // Defining the above declared function in class employee using scope res. operator.
	c = c1;
}

int main () {
	
	Employee Addy;
	Addy.d = 7;                  //We can not declare value as Addy.a as it is private. 
	Addy.e = 9;
	Addy.setData(77,99,11);
	Addy.getData();
	
	return 0;
}
