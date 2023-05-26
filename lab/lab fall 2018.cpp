#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
	
	string a;
	cin>>a;
	int sum=0;
	int b=a.size();
	cout<<b<<endl;
	for(int i=0;i<b;i++){
		sum+=a[i]-'0';
	}
	cout<<sum;
	
	return 0;
}
