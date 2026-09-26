#include <iostream>
using namespace std;

// Destructors - they never take any argument nor return any value , used to free up the memory taken by a constructor after it's used.

int count = 0;

class num{
	public:
		
		num(){
			count++;
			cout << "This is the time when constructor is called " << count << endl;
		}
		
		~num(){             //Destructor declaration
			cout << "This is the time when destructor is called " << count << endl;
			count--;
		}
};

int main () {
	
	cout << "We are inside our main function " << endl;
	cout << "Creating first object n1 " << endl;
	num n1;
	
	{
		cout << "Entering this block" << endl;
		cout << "Creating two more objects" << endl;
		num n2 , n3;
		cout << "Exiting this block." << endl;
	}
	
	cout << "Back to main" << endl;
	return 0;
}
