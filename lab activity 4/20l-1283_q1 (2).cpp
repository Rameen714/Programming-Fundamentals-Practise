#include <iostream>
using namespace std;

int main()
{
    int n=0,b=0,Sum=0;
	cin>>n;
    for(int c=1;c<=n;c++)
    {
      cin>>b;
      Sum+=b;
    }
    
    cout<<"Sum = "<<Sum;
    b=Sum/n;
    cout<<"average ="<<b;

    return 0;
}
