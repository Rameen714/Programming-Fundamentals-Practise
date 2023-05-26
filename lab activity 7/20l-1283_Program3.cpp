#include <iostream>

using namespace std;

int cout_array(int A[],int n){
    
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
}
int main()
{
    cout<<"enter number upto which u want FIBONACCI SEQUENCE"<<endl;
    int i,c2=0,n=0,c=0,A[50];
    double avg=0;
    cin>>n;
    for( i = 0,A[i]={0},A[(i+1)]={1} ; i < n; i++)
    {
        A[i+2]=A[i]+A[i+1];
    }
    cout_array(A,n);
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        avg=avg+A[i];
    }
    avg=avg/n;
    cout<<"Average : "<<avg<<endl;
    for(int i = 0; i < n; i++){
        if(A[i]<avg) 
            c2=c2+1;
    }
    cout<<"Term Count Less Than Average:"<<c2;
    return 0;
}
