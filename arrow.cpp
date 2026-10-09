#include <iostream>
using namespace std;

//Pointers to objects and arrow operator.

class Complex{
	public:
		int real , imaginary;
		
		void getData() {
			cout << "The real part is : " << real << endl;
			cout << "The imaginary part is : " << imaginary << endl;
		}
		
		void setData(int a , int b) {
			real = a;
			imaginary = b;
		}
};

int main() {
	Complex C1;
	Complex *ptr = &C1;
	
	//C1.setData(1,54);
	//C1.getData();
	
	//Arrow operator(->)
	
	ptr->setData(7,54);   //same as - (*ptr).setData(7,54);           
	ptr->getData();       //same as - (*ptr).getData();
	
	//Complex *ptr = new Complex[3]; (array of objects)
	
	
	return 0;
}

