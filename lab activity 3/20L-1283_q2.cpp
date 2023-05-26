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
    int x,y,a,b,c,d;
    cout<<"please input coordinates of point";
    cin>>x>>y;
    cout<<"please input coordinates of top left corner of rectangle";
    cin>>a>>b;
    cout<<"please input coordinates of bottom right corner";
    cin>>c>>d;
    if (x>=a && x<=c)
    {
       if(y<=b && y>=d) 
       cout<<"Point lies inside region";
    }
    else
    cout<<"Point lies outside region";
    return 0;
}
