#include<iostream>
using namespace std;

int main(){
	
	//If-else ladder
	//We can use any number of else if conditions in the else if ladder.
	
	int age;
	cout<<"Tell me your age : "<<endl;
	cin>>age;
	
	if(age<18){
		cout<<"You are not allowed at the party"<<endl;
	}
	
	else if(age==18){
		cout<<"allowed but with some rules"<<endl;
	}
	
	else{
		cout<<"You are allowed at the party!";
	}
	
	
	return 0;
	
}
