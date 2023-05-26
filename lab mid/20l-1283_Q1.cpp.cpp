#include <iostream>
using namespace std;
int main()
{
    int n=0,p=0,a=0,b=0,c=0;
	cout<<"enter number of pages of book and press enter and then enter page number you want to open";
	cin>>n>>p;
	b=n/2;
    if (n-p==1) 
    {
		cout<< "flip pages=0"; 
		return 0;
	}	
	if(p<=b)
	{
	    a=(p-1)/2;
		if(a%2==0) a+=1;
	    cout<<"flip pages from start of book "<< a;
	}
	else if(p>b)
	{
	    c=n-p;
		if(c%2==0) 
			a=(c/2);
		else 
			a=(c/2)-1;
	    cout<<"flip pages from end of book"<< a;	
	}
	return 0;
}