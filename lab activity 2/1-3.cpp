// program to tell asci codes 

#include <iostream>
using namespace std;

int main()
{
    int Code;
    cin>>Code;
    if(Code>64&Code<91)
    {
     cout<<"Upper Case Character";
    }
    else
    {
        if(Code > 96 & Code < 123)
        {
         cout<<"Lower Case Character";   
        }
        else
        {
            if(Code > 47 & Code < 58)
            {
             cout<<"A Digit";  
            }
            else
            {
                if(Code < 128)
                {
                    cout<<"Special Character";
                }
                else
                {
                    cout<<"Not an ASCII Character";
                }
            }
        }
    }
    return 0;
}
