#include <iostream>
using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    cin>>a;
    f=a;
    for( ;a>=0;cin>>a)
    {
		b+=a;
        d+=1;
        if(a<f) f=a;
        if(a>e) e=a;
        
    }
    cout<<"sum"<<b<<endl;
    c=b/d;
    cout<<"average"<<c<<endl;
    cout<<"maximum"<<e<<endl;
    cout<<"minimum"<<f<<endl;
    

    return 0;
}
