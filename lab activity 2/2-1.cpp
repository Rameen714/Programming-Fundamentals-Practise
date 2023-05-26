// program to convert height in inches

#include <iostream>
using namespace std;

int main()
{
    double ft,inch,TI,TC;
    cout<<"Please Enter height in feet AND inches in sequence";
    cin>>ft>>inch;
    TI=ft*12+inch;
    cout<<"total lenght in inches="<<TI;
    TC=TI*2.54;
    cout<<"\ntotal lenght in centimetres"<<TC;
    

    return 0;
}
