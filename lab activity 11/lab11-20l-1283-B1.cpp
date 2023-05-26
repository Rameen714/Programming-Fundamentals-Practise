#include<iostream>

#define maxsize 50

using namespace std;

int  c=1;
double fibo(int n){
	if(n==1 || n==0)
		return 1;
	if(n>=2)
		return fibo(n-1)+fibo(n-2);
}

int factorial(int n){
	if(n<=1)
		return 1;
	if (n>1)
		return n*factorial(n-1);
	return 1;
}
int power(double x,int n){
	
	if (n==0)
		return 1;
	
	c=c+1;
	double ans = power(x,n/2);
	
	if (n%2!=0)
	 	c=c+2;
		return x*ans*ans;
	 	
	
	c=c+1;
	return ans*ans; 
}
double sum(double a[], int n){
	if(n==1) return a[0];
	else
	if(n>1)
		return sum(a,n-1)+a[n-1];
	return 0;
}


int inputarray(double a[],int n){

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
// recursive codes : allowing afunctn to call itself
// sometimes it allows smarter codes

int main(){
	
	int n;
	double a[maxsize];
	double x;
	//SUM
	cout<<"\n       SUMS\n\n";
	cout<<"Enter the total number of numbers  you want to enter to compute sum  :";
	cin>>n;
	cout<<"Enter Values for array\n";
	inputarray(a,n);
	cout<<"\nsum is "<<sum(a,n)<<"\n";
	
	cout<<"\n       POWER\n\n";
	//POWER
	cout<<"Enter Number whose power u want to compute : ";
	cin>>x;
	cout<<"Enter Power : ";
	cin>>n;
	cout<<"\n"<<n<<" power of "<<x  <<" is  "<<power(x,n)<<"   Multiplications done = "<<c; 
	cout<<"\nshowing some additional examples other than the number u entered\n";
	
	cout<<"\n"<<n<<" power of "<<x-1<<" is  "<<power(x-1,n)<<"  Multiplications done = "<<c; 

	cout<<"\n"<<n<<" power of "<<x+1<<" is  "<<power(x+1,n)<<"  Multiplications done = "<<c; 
	
	cout<<"\n"<<n+1<<" power of "<<x<<" is  "<<power(x,n+1)<<"  Multiplications done = "<<c;
	
	//FACTORIAL
	
	cout<<"\n\n      FACTORIALS\n";
	
	for (int i=0;i<15;i++){
		cout<<"\n Factorial of  "<<i<<" is :"<<factorial(i);
	}
	
	//
	
	cout<<"\n\n     Fibonacci Sequence \n";
	cout<<"enter the term of Fibonacci Sequence u want to see"; 
	cin>>n;
	cout<<"\n nth term  "<<0<<" of Fibonacci Sequence    is :"<<0;	
		for (int i=0;i<n;i++){
		cout<<"\n nth term  "<<i+1<<" of Fibonacci Sequence    is :"<<fibo(i);
	}
	
	
	
	return 0;
}
