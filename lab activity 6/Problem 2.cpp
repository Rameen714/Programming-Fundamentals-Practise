#include <iostream>
using namespace std;
void cin_Array(int arr[],int n)
{
    for (int i=0;i<n;i++)
        cin>>arr[i];
    return;
}
void cout_Array(int arr[], int n)
{ 
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return;
}
void Add_array(int arrA[],int arrB[],int arrC[],int n)
{ 
    cout<<"Adition point by point is"<<endl;
    for (int i=0;i<n;i++)
    { 
       arrC[i]=arrA[i]+arrB[i];
       cout<<arrC[i]<<" ";
    }
    return;
}
void Sub_array(int arrA[],int arrB[],int arrC[],int n)
{ 
    cout<<"Subtration point by point is"<<endl;
    for (int i=0;i<n;i++)
    { 
       arrC[i]=arrA[i]-arrB[i];
       cout<<arrC[i]<<" ";
    }
}
void Multiply_array(int arrA[],int arrB[],int arrC[],int n)
{ 
    cout<<"Multiplication point by point is"<<endl;
    for (int i=0;i<n;i++)
    { 
       arrC[i]=arrA[i]*arrB[i];
       cout<<arrC[i]<<" ";
    }
    return;
}
void Divide_array(int arrA[],int arrB[],int arrC[],int n)
{ 
    cout<<"Divison point by point is"<<endl;
    for (int i=0;i<n;i++)
    { 
       arrC[i]=arrA[i]/arrB[i];
       cout<<arrC[i]<<" ";
    }
    return;
}
int Dot_Product(int arrA[],int arrB[],int n)
{ 
    cout<<"Dot Product is"<<endl;
    int product=0;
    int i;
    for (i=0;i<n;i++)
        product=product+arrA[i]*arrB[i];
    return product;
}
int main()
{
    int n;
    int array_1[49], array_2[50], array_3[100];
    cout<<"Enter Number of elemets of array n= ";
    cin>>n;
    do
    {
    cin_Array(array_1,n);
    cout<<"elements given for frst array are"<<endl;
    cout_Array(array_1,n);
    cin_Array(array_2,n);
    cout<<"elements given for second array are"<<endl;
    cout_Array(array_2,n);
    Add_array(array_1,array_2,array_3,n);
    cout<<endl;
    Sub_array(array_1,array_2,array_3,n);
    cout<<endl;
    Multiply_array(array_1,array_2,array_3,n);
    cout<<endl;
    Divide_array(array_1,array_2,array_3,n);
    cout<<endl;
    cout<<Dot_Product(array_1,array_2,n)<<endl;
    cout<<"Enter Number of elemets of array n= ";
    cin>>n;
    }while (n!=0);
    return 0;
}
