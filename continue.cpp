#include<iostream>
using namespace std;
int main(){
	
	//Continue in loop - Used to break the current iteration & move to next iteration in loop.
	
	for(int i = 0; i <= 10; i++){
		if(i==0){
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
