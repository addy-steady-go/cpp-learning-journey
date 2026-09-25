#include <iostream>
using namespace std;

//Copy Constructor - When no copy constr. is found , compiler supplies it's own copy constructor.

class Number {
	
	int a;
	public:
		
		Number(){
			a = 0;
		}
		
		Number(int num){
			a = num;
		}
		
		Number(Number &obj){        //Copy Constructor
			
			cout << "Copy Constructor called : " << endl;
			a = obj.a;
		}
		
		void display() {
			cout << "The number for this object is " << a << endl;
		}
};


int main () {
	
	Number x , y , z(45);
	x.display();
	y.display();
	z.display();
	Number z1(x);
	z1.display();
	
	return 0;
	
}
