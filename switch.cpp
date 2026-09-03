#include<iostream>
using namespace std;

int main(){
	
	//Switch case statement
	//break is used in switch case to exit the conditional flow so that it does not print the remaining outputs\
	
	int age;
	cout<<"tell me your age : "<<endl;
	cin>>age;
	
	switch(age){
		
		case 18:
			cout<<"You are 18 yrs old"<<endl;
			break;
		
		case 23:
			cout<<"You are 23 yrs old"<<endl;
			break;
			
		default:
			cout<<"You told me your age it's okay!";
			break;
	}
	
	return 0;
}
