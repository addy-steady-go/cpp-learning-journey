#include <iostream>
using namespace std;

//Revisiting pointers , new & delete keywords.

int main () {
	int a = 4;
	int* ptr = &a;
	cout << "The value of a is : " << *(ptr) << endl;
	
	//New operator / Keyword
	int *p = new int(40);
	cout << "The value at address p is : " << *(p) << endl;
	
	int *arr = new int[3];
	arr[0] = 7;
	*(arr+1) = 8;
	arr[2] = 9;
	
	cout << "The values in array are : " << arr[0] << "," << *(arr+1) << "," << arr[2] << endl;
	
	//Delete operator / Keyword
	// delete[] arr;
	//Dynamically allocated arrays and variables are deleted using this keyword.
	
	return 0;
}
