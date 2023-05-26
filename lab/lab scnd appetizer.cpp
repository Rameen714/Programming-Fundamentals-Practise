#include<iostream>

using namespace std;

int main(){
	
	int n=0,a=0,sum=0,avg=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>0)
			sum+=a;
	}
	cout<<endl<<sum<<endl;
	if(n!=0)
	{
		avg=sum/n;
		cout<<avg;
	}
	else 
		cout<<"n is zero hence no average";
	return 0;
}
