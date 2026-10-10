#include <iostream>
using namespace std;

//This keyword points to the object which is being created or invoked.

class A{
	int a;
	
	public:
		
		void setData(int a){
			this->a=a;              //This keyword.
		}
		
		void getData(){
			cout << "The value of a is : " << a << endl;
		}
		
};

int main () {
	A a;
	a.setData(7);
	a.getData();
	
	return 0;
}
