#include <iostream>
using namespace std;

//Dynamic initialization of objects using constructors.

class bankDeposit {
	
	int principal;
	int years;
	float interestRate;
	float returnValue;
	
	public:
		bankDeposit(){}
		bankDeposit(int p , int y , float r);
		bankDeposit(int p , int y , int r);
		void show();
		
};

bankDeposit::bankDeposit(int p , int y , float r){
	
	principal = p;
	years = y;
	interestRate = r;
	returnValue = principal;
	
	for(int i = 0; i < y; i++){
		returnValue = returnValue*(1+interestRate);
	}
}

bankDeposit::bankDeposit(int p , int y , int r){
	
	principal = p;
	years = y;
	interestRate = float(r)/100;
	returnValue = principal;
	
	for(int i = 0; i < y; i++){
		returnValue = returnValue*(1+interestRate);
	}
}

void bankDeposit::show(){
	
	cout << "The principal amount was : " << principal
		 << ", return value after " << years << " years is :" << returnValue << endl;
}

int main () {
	
	bankDeposit bd1 , bd2 , bd3 ;
	
	int p , y , R ;
	float r;
	
	cout << "Enter the value of p , y & r(float) : " << endl;
	cin >> p >> y >> r;
	
	bd1 = bankDeposit(p , y ,r);
	bd1.show();
	
	cout << "Enter the value of p , y & R(int) : " << endl;
	cin >> p >> y >> R;
	
	bd2 = bankDeposit(p ,y ,R);
	bd2.show();
	
	return 0;
}
