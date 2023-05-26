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
    int total_bill,amount_paid,Return,No_of_5000_Notes,No_of_1000_Notes,No_of_500_Notes,No_of_100_Notes,No_of_50_Notes,x;
    cin>>total_bill>>amount_paid;
    Return=amount_paid-total_bill;
    cout<<"Return="<<Return;
    if(Return>=5000)
    {
       No_of_5000_Notes=Return/5000;
       Return=Return%5000;
    }
        if(Return>=1000)
        {
         No_of_1000_Notes=Return/1000;
         Return=Return%1000;
        }
           
            if(Return<1000 && Return>=500)
            {
                 No_of_500_Notes=Return/500;
                 Return=Return%500;
            }
              
                if(Return<500 && Return>=100)
                {
                    No_of_100_Notes=Return/100;
                    Return=Return%100;
                }
            
      
       cout<<"\nNo_of_5000_Notes"<<No_of_5000_Notes;
       cout<<"\nNo_of_1000_Notes"<<No_of_1000_Notes;
       cout<<"\nNo_of_500_Notes"<<No_of_500_Notes;
       cout<<"\nNo_of_100_Notes"<<No_of_100_Notes;
   
    

    return 0;
}
