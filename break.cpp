#include<iostream>
using namespace std;
int main(){
	
	//Break in loop - Used to exit the loop when condition is met.
	
	for(int i = 1; i<=10; i++){
		cout<<i<<endl;
		if(i==7){
			break;
		}
	}
	return 0;
}
