#include <iostream>

using namespace std;

int main(){
	int year;
	cin>>year;
	if(year % 400 == 0)
		cout<<"Leap Year";
	else {
		if(year%100==0)
			cout<<"not a leap year";
		else if(year%4==0)
			cout<<"leap year";
	}
	return 0;
}
