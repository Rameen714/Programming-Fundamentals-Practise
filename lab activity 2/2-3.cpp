// program to compute sin

#include <iostream>
using namespace std;

int main()
{
   double angle,x,sinx,cosx,tanx;
   cout<<"write angle in degrees";
   cin>>angle;
   x = (3.1415/180)*angle;
   sinx=x - (x*x*x)/6 + (x*x*x*x*x)/120 - (x*x*x*x*x*x*x)/5040 + (x*x*x*x*x*x*x*x*x)/362880;
   cosx=1 - (x*x)/2 + (x*x*x*x)/24 - (x*x*x*x*x*x)/720 + (x*x*x*x*x*x*x*x)/40320;
   tanx=sinx/cosx;
   cout<<"sin angle="<<sinx;
   cout<<"\ncos angle="<<cosx;
   cout<<"\ntan angle="<<tanx;
   
    return 0;
}
