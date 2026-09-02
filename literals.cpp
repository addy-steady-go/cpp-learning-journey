#include<iostream>
using namespace std;
int main(){
	//Literals in float , double & long double
	float d = 34.4f;
	long double e = 34.4l;
	
	//we declare the data types by literals as by default C++ takes the decimal value as Double
	
	cout<<"size of 34.4 is "<<sizeof(34.4)<<endl;
	cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl;
	cout<<"size of 34.4l is "<<sizeof(34.4l);
	
	return 0;
}
