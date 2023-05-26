#include<iostream>

using namespace std;

int FindEquilibrium(int a[],int n){
    cout<<endl;
    int sum=0;
    int h=0,cc=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    int d=a[0];
    sum=sum-d;

    for(int i=1;i<=n;i++){

        h+=a[i-1];
        sum=sum-a[i];
        if(h==sum)
        {
            cout<<"\nEquilibrium Index is: "<<i-1<<"\n";
            cc=1;
        }
    }
    if (cc==1)        return 0;
    else if(cc==0)
    {
        cout<<"\nNo Equilibrium Index found\n";
        return -1;
    }
}

int main(){
    int n;
    cout<<"\nEnter size for array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements each separated by a space:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nArray entered is:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    FindEquilibrium(a,n);


    return 0;
}
