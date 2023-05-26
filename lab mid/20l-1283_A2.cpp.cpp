#include <iostream>
using namespace std;
int main()
{
    int n=0,sum=0,average=0,a=0,b=0;
	cout<<"enter total number of values you want to enter";
	cin>>n;
	if(n<0)
	{
         cout<<"program for possitive values";
		 return-1;
	}
	a=n;
	for(int i=1;i<=n ;i++)
	{
	    cin>>b;
		if (b>0)
		{
			sum+=b;
		}
	}
	average=sum/a;
	cout<<"sum is "<<sum<<endl;
	cout<<"äverage is "<<average<<endl;
	return 0;	
	
}
