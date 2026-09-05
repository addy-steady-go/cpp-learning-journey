#include<iostream>
using namespace std;
int main(){
	//Tables in c++
	
	int n;
	cout<<"Enter any number for it's table"<<endl;
	cin>>n;
	cout<<"Your table is :-"<<endl;
	
	for(int i = 1; i <=10; i++){
		
		cout<<(n*i)<<endl;
	}
	return 0;
}
