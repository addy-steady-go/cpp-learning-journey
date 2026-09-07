#include<iostream>
using namespace std;
int main(){
	
	// Arrays - Used to store similar type of data in cont. memory locations.
	// Helps in collecting large amount of data. for ex - marks of 2000 students.
	
	//1st way to make an array
	
	
	int marks[3] = {99,98,96};
	
	//Indexing in an array starts from zero.
	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	
	//2nd way to make an array or give values in an array.
	
	int price[3];
	
	price[0]=499;
	price[1]=699;
	price[2]=999;
	
	price[1]= 599 ; // This is how we update the value inside an array before printing it.
	
	for (int i = 0 ; i < 3 ; i++){
		cout<<"The price of " << i << " is " << price[i]<< endl; // Printing an array using for loop.
	}
	 
	return 0;
	
}
