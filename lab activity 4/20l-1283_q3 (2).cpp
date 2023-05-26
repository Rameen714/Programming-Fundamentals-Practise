#include <iostream>
using namespace std;
void staircase(int n)
{
    
    for(int c=1;c<=n;++c)
    {
      for(int i=1;i<=c;++i)
      {
          cout<<"#";
      }
      cout<<endl;
    }
	return;
}


int main()
{
    int n;
    cin>>n;
    staircase(n);
    return 0;
}
