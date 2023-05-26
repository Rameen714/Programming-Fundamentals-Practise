#include<iostream>

using namespace std;

int inbase(int rem[10],int no,int base){
	
	int i=0;
	for(i=0;i<10;i++){
		if(no==0)
			break;
		rem[i]=no%base;
		no=no/base;
	}
	return i;	
}

int out(int a[],int n){
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int p(int rem[],int i){
	
	for(int j=0,k=i-1;j<i,k>=0;j++,k--)
	{
		if(rem[j]!=rem[k])
			return 1;
	}
	return 0;
}

int main(){
	int rem1[10]={};
	int rem2[10]={};
	int no=0,base1=0,base2=0;
	cin>>no>>base1>>base2;
	if(base1<2 || base1>16 || base2<2 || base2>16){
		cout<<"not supported bases";
		return -1;
	}
	int i1=inbase(rem1,no,base1);
	int i2=inbase(rem2,no,base2);
	out(rem1,i1);
	out(rem2,i2);
	int a=p(rem1,i1);
	int b=p(rem2,i2);
	if(a==0 && b==0)
		cout<<"MacroPalindrome";
	else
		cout<<"NOT";
	return 0;
}
