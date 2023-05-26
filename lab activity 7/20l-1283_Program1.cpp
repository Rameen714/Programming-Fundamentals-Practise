#include <iostream>

using namespace std;

#define array_size 100

int A[array_size],B[array_size],C[array_size],n,i=0,mode=0,c,d,j=0;

int input_array(int A[], int n){
    
    for( i=0; i<n; i++){
        cin>>A[i];
    }
}

int cout_array(int A[], int n){
    
    for( i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
}
 
int cout_array_2(int C[],int n){ 
    for(i=j+1;i<n;i++)
        cout<<C[i]<<endl;
}

int Mode(int A[],int n){
    
    for( i=0; i<n; i++){
        if (A[i]>mode){
            mode=A[i];
        }
    }
}

int index(int A[],int n){
    while (j < n)
    {
        if (A[j] == mode) {
            break;
        }
        j++;
    }
}

void increasing(int A[],int n){
    
    for (i=0;i<j;i++){
        if (A[i+1]<A[i]){
            c=-1;
            return ;
        }
        B[i]=A[i];
    }
}

void decreasing(int A[],int n){
    
    for (i=n;i>j;i--){
        if (A[i]>A[i-1]){
            d=-1;
            return ;
        }
    }
    for(i=j+1;i<n;i++)
        C[i]=A[i];
}

int main()
{
    cout<<"Please Enter Total number of elements you want to enter in array"<<endl;
    cin>>n;
    cout<<"Now enter the values"<<endl;
    input_array(A,n);
    Mode(A,n);
    index(A,n);
    increasing(A,n);
    decreasing(A,n);
    if (c==0 && d==0) 
    {
        cout <<"Array is unimodel"<<endl;
        cout_array(B,j);
        cout<<mode<<"*"<<endl;
        cout_array_2(C,n);
    }
    else
    { 
        cout<<"Array is not unimodel"<<endl;
        cout_array(A,n);
        
    }
    
    return 0;
}
