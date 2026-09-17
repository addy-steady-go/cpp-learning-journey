#include<iostream>
using namespace std;

//Using arrays in class.

class Shop {
	
	int itemID[10];
	int itemPrice[10];
	int counter;
	
	public:
		void initCounter(void) { counter = 0 ;}
		void setPrice(void);
		void displayPrice(void);	
	
};

void Shop :: setPrice(void) {
	
	cout << "Enter ID of item no.  " << counter+1 << endl;
	cin >> itemID[counter];
	
	cout << "Enter price of the item " << endl;
	cin >> itemPrice[counter];
	
	counter++;
}

void Shop :: displayPrice(void) {
	
	for (int i =0; i < counter; i++){
	
	cout << "The ID of your item is : " << itemID[i] << " and it's price is : " << itemPrice[i] << endl; 
}
}

int main () {
	
	Shop Dukaan;
	Dukaan.initCounter();
	Dukaan.setPrice();
	Dukaan.setPrice();
	Dukaan.setPrice();
	Dukaan.displayPrice();
	
	return 0;
}



