//ptogram to

#include <iostream>
using namespace std;
int main()
{
    int a,b;
	cout<<"enter two values";
	cin>>a>>b;
	cout<<"addition of values is "<<a+b<<endl;
	cout<<"subtraction of values is "<<a-b<<endl;
	cout<<"multiplication of values is "<<a*b<<endl;
	if (a==0 || b==0) 
	{
	cout<<"Divison is not possible.Value cannot be zero ";
	}
	else
	{
	cout<<"divison of values is "<<a/b<<endl;
	}
	return 0;
}