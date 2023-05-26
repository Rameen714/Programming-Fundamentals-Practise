#include <iostream>

using namespace std;

void cin_Array (int arr[], int n)
{
    cout << "enter the values" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void cout_Array (const int arr[], int n)
{
    cout << "the values are" << endl;
    for (int i = 0; i < n; i++)
        cout << "  number in index  "<<i<<"  is  "<<arr[i] << "\n ";
    cout << endl;
}
void Digit_Frequency(const int Numbers[],int N, int F[])
{ 
    int temp,num;
    
    for(int i=0;i<10;i++)
    {
        F[i]=0;   
    }
    for(int i =0;i<N;i++)
    {
        num = Numbers[i];
        if(num<0)
            num=-num;
        do{
        temp = num%10;
        F[temp]++;
        num = num/10;
        }while(num != 0);
    }
}
int main()
{
    int N;
    cout<<"enter number of total values tbp in array such as (0<N<21)"<<endl;
    cin>>N;
    int Numbers[20]={0},F[10];
    cin_Array(Numbers,N);
    Digit_Frequency(Numbers,N,F);
    
    cout_Array(F,10);
    cout_Array(Numbers,N);
    
    return 0;
}
