

#include <iostream>

using namespace std;

int main()
{
    int n,number,number2 =0,digit=0;
    cout<<"enter total number of test cases you want to run"<<endl;
    cin>>n;
    int Palindrome[n];
    for(int i = 0 ; i < n; i++)
    {
        cout<<"enter the  test case ";
        cin>>Palindrome[i];
    }
    for(int c = 0; c < n ; c++)
    {
        number2=0;
        number = Palindrome[c];
        do{
            digit = Palindrome[c] % 10;
            number2 = (number2 * 10) + digit;
            Palindrome[c] = Palindrome[c] / 10;
        }while (Palindrome[c] != 0);
        
        if (number == number2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
      
    }
    

    return 0;
}
