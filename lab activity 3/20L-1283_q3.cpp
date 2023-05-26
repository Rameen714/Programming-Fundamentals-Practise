/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int Show_Units(int D)
{  
  if(D == 1)  cout<<"One";   
  if(D == 2)  cout<<"Two";  
  if(D == 3)  cout<<"Three";   
  if(D == 4)  cout<<"Four"; 
  if(D == 5)  cout<<"Five"; 
  if(D == 6)  cout<<"Six" ;
  if(D == 7)  cout<<"Seven"; 
  if(D == 8)  cout<<"Eight";
  if(D == 9)  cout<<"Nine";
  else return 0 ;
}
 int Show_Tens(int D)
{  
 if(D == 2)  cout<<"Twenty";   
 if(D == 3)  cout<<"Thirty";   
 if(D == 4)  cout<<"Forty" ;  
 if(D == 5)  cout<<"Fifty" ;  
 if(D == 6)  cout<<"Sixty" ; 
 if(D == 7)  cout<<"Seventy";   
 if(D == 8)  cout<<"Eighty" ;  
 if(D == 9)  cout<<"Ninety" ;  
 else return 0 ; 
}  
 int Show_Teen(int D)
{  
 if(D == 10)  cout<<"Ten";   
 if(D == 11)  cout<<"Eleven";   
 if(D == 12)  cout<<"Twelve";   
 if(D == 13)  cout<<"Thirteen";   
 if(D == 14)  cout<<"Fourteen";   
 if(D == 15)  cout<<"Fifteen";  
 if(D == 16)  cout<<"Sixteen";   
 if(D == 17)  cout<<"Seventeen";   
 if(D == 18)  cout<<"Eighteen";   
 if(D == 19)  cout<<"Nineteen";   
   else return 0 ; 
}  

int main()
{
    int n,a;
    cout<<"please enter a number within 1 and 9999";
    cin>>n;
    if (n>1000)
    {
        a=n/1000;
        n=n-(a*1000);
        a=Show_Units(a);
        cout<< a;
        cout<<" thousand ";
        
    }
    if (n>=100)
    {
        a=n/100;
        n=n-(a*100);
        a=Show_Units(a);
        cout<< a;
        cout<<" hundred ";
        
    }
    if (n>10 && n<20)
    {
        a=Show_Teen(n);
        cout<< a ;
    }
    if (n<100 && n>20)
    { 
        a=n/10;
        a=Show_Tens(a);
        cout<< a ;
        n=n-(a*10);
    }
    if (n<10)
    {
     a=Show_Units(n);
     cout<< a ;
    }
 
    return 0 ;
}
