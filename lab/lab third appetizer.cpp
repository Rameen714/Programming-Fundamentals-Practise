#include<iostream>

using namespace std;

int main(){
	
	int n=0,j=0;
	cin>>n;
	if(n>0){
		for(int i=2;i<n;i+=2){
			if(n%i==0){
				cout<<i<<" ";
				j++;
			}
		}
		cout<<endl<<j;
	}
	return 0;
}
