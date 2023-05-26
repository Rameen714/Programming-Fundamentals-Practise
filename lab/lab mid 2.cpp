#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=1;i<n;i++)
	{
		//cout<<A[i-1]<<" "<<A[i]<<" "<<A[i+1]<<endl;
		//cout<<"i am running"<<endl;	
		if(i+1==n)
		{
			cout<<endl<<"Zag-Zig";		
			return 0;
		}
		if(i%2==0)
		{
			if(A[i-1]<A[i] || A[i+1]<A[i])
				break;
		}
		
		if(i%2!=0)
		{
			if(A[i-1]>A[i] || A[i+1]>A[i])
				break;
		}

		
	}
	for(int i=1;i<n;i++)
	{
		//cout<<A[i-1]<<" "<<A[i]<<" "<<A[i+1]<<endl;
		//cout<<"i am running"<<endl;
		if(i+1==n)
		{
			cout<<endl<<"Zig-Zag";		
			return 0;			
		}			
		if(i%2==0)
		{
			if(A[i-1]>A[i] || A[i+1]>A[i])
				break;
		}
		if(i%2!=0)
		{
			if(A[i-1]<A[i] || A[i+1]<A[i])
				break;
		}
	
	}
	cout<<endl<<"niether";

	return 0;
}
