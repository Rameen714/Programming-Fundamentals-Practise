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
    int x,y,TMP;
    cin>>x>>y;
    if (x>y)
    {
    TMP=x;
    x=y;
    y=TMP;
    }
    cout<<x<<y;
    
     return 0;
}
