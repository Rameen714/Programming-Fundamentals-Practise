#include<iostream>

using namespace std;

int cin_array(int A[],int C){
    for(int i=0;i<C;i++){
        cin>>A[i];
    }
}

int cout_array(int A[],int C){
    for(int i=0;i<C;i++){
        cout<<A[i]<<" ";
    }
}

int MergeArrays(int a[],int b[],int c[],int m,int n){

    int o=m+n,cc=0,i=0,j=0;
    do{
        if(a[i]>b[j]){
            c[cc]=b[j];
            j++;cc++;
        }
        if(b[j]>a[i]){
            c[cc]=a[i];
            i++;cc++;
        }
        if(a[i]==b[j]){
            c[cc]=a[i];
            cc++;i++;
            c[cc]=b[j];
            cc++;j++;
        }
        if(i==m && j!=n)
        {
            c[cc]=b[j];
            c++;j++;
        }
        if(j==n && i!=m)
        {
            c[cc]=a[i];
            c++;i++;
        }

    }while(i<=m && j<=n && cc!=o+1);

    /*
     for(int i=0;i<m;i++)
     {
        c[i]=a[i];
     }
    int k=0,j=0;
    for(int i=0,j=0;i<m+1,j<n;i++)
    {
            if(c[i]>b[j])
            {
                int a=c[i];
                c[i]=b[j];
                c[i+1]
                j++;
                k++;

            }
    }

    int u=m;int p=0;
    while(u<o){
            c[u]=b[p];
            p++;
            u++;
    }
    */
    /*
    for(int i=k,j=0;i<0,j<n;i++)
    {
            if(c[i]<b[j])
            {
                int a=c[i];
                c[i]=b[j];
                b[j]=a;
                j++;
            }

    }

    */
}

int main(){
    int m=0, n=0,o=0;
    cout<<"\nEnter size for first array: ";cin>>m;
    int a[m]={ };
    cout<<"\nEnter numbers for first array:\n";
    cin_array(a,m);
    cout<<"Entered array is: \n";
    cout_array(a,m);
    cout<<endl;
    cout<<"\nEnter size for second array: ";cin>>n;
    int b[n]={ };
    cout<<"\nEnter numbers for second array:\n";
    cin_array(b,n);
    cout<<"Entered array is: \n";
    cout_array(b,n);
    cout<<endl;
    o=m+n;
    int c[o]={ };
    MergeArrays(a,b,c,m,n);
    cout<<endl<<"Merged Array With ascending order is:\n";
    cout_array(c,o);
    cout<<"\n";

    return 0;
}
