#include <iostream>

using namespace std;

void cin_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
    return;
}
void cout_Array( int arr[], int n)
{
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
    cout<<endl;
    return;
}
void selectionSort(int a[], int n)
{
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) 
   {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
   return;
}
int main()
{
    int n,c=0;
    cout<<"enter number of elements to be entered in array"<<endl;
    cin>>n;
    int arr_1[50];
    cin_array( arr_1, n);
    cout<<"elements given for First array are"<<endl;
    cout_Array( arr_1, n);
    selectionSort( arr_1, n);
    int arr_2[100];
    cin_array( arr_2, n);
    cout<<"elements given for second array are"<<endl;
    cout_Array( arr_2, n);
    cout<<"Selection sort for first array "<<endl;
    selectionSort(arr_1, n);
    for (int i = 0; i < n; i++)
        cout<< arr_1[i] <<" ";
    cout<<endl;
    cout<<"Selection sort for second array "<<endl;
    selectionSort(arr_2, n);
    for (int i = 0; i < n; i++)
        cout<< arr_2[i] <<" ";

    return 0;
}
