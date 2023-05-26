/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int number,sum;
    cout<<"Please enter a six digit number";
    cin>>number;
    if (number<999999 && number>100000)
    {
     sum=number%10;
     number=number/10;
     sum=sum+(number%10);
     number=number/10;
     sum=sum+(number%10);
     number=number/10;
     sum=sum+(number%10);   
     number=number/10;
     sum=sum+(number%10);
     number=number/10;
     sum=sum+number;
     cout<<sum;
    }
    else
    cout<<"Please enter within range";
    return 0;
}
