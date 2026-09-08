#include<iostream>
using namespace std;
int main(){

//Enum - represents a group of constants , assigns int values to data.

enum Meal{
	breakfast , lunch , dinner // here bf = 0 , lunch = 1 & dinner = 2
};

Meal m1 = lunch;
cout<<m1<<endl;

return 0;
}

