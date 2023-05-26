#include<iostream>

using namespace std;

int in_arr(int A[],int n)
{
    for(int i=0;i<n;i++)
        cin>>A[i];
}
int out_arr(int A[],int n)
{
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void eq(int A[],int n){

    for(int i=0;i<n;i++){
        //cout<<"i executed"<<endl;
        int a=0,b=0;
        for(int j=0;j<i;j++)
        {
            a+=A[j];
            //cout<<"a:"<<a<<endl;
        }
        for(int j=i+1;j<n;j++)
        {
            b+=A[j];
            //cout<<"b:"<<b<<endl;
        }
        if(b==a)
        {
            cout<<"equilibrium index is :";
            cout<< i;
            return ;
        }
    }
    cout<<"none found";
    return ;
}
int main(){
    int c=0,a=0,b=0;
    cin>>c;
    int A[c];
    in_arr(A,c);
    out_arr(A,c);
    eq(A,c);



    return 0;
}
