#include <iostream>
using namespace std;

//Default arg - used while defining a f(x) and can be overwrite while using the f(x).
//Default arg are declared after the compulsory arg and are written on the right side.
//In this code we gave default interest value as 1.04 and returned the overwritten value as 1.1

float moneyReceived (int currMoney , float interest = 1.04){
	return currMoney*interest;
}

int main () {
	int money = 100000;
	
	cout<<"If you have " << money << "Rs. in your bank a/c , you will receive " << moneyReceived(money,1.1) << "Rs. after 1 year." << endl;
	
	return 0;
}

//Constant arg. - used to keep the value of any arg constant throughout the code , generally used in ref. var. & pointers.

// int strlen (const char*p){}
