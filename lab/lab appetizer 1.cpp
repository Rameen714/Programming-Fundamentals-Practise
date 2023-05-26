#include<iostream>

using namespace std;

int main(){
	
	int a=0,b=0;
	cin>>a>>b;
	cout<<a+b<<endl
		<<a-b<<endl
		<<a*b<<endl;
	if(b!=0)
		cout<<a/b;
	else
		cout<<"divison not possible";
	
	
	return 0;
}
