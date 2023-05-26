
#include <iostream>
using namespace std;

int main()
{
    int total_bill,amount_paid,Return,No_of_5000_Notes,No_of_1000_Notes,No_of_500_Notes,No_of_100_Notes,No_of_50_Notes,No_of_20_Notes,No_of_10_Notes;
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
    if(Return<100 && Return>=50)
                {
                    No_of_50_Notes=Return/50;
                    Return=Return%50;
                }
    if(Return<50 && Return>=20)
                {
                    No_of_20_Notes=Return/20;
                    Return=Return%20;
                }
    if(Return<20 && Return>=10)
                {
                    No_of_10_Notes=Return/10;
                    Return=Return%10;
                }
                
                
            
      
       cout<<"\nNo_of_5000_Notes"<<No_of_5000_Notes;
       cout<<"\nNo_of_1000_Notes"<<No_of_1000_Notes;
       cout<<"\nNo_of_500_Notes"<<No_of_500_Notes;
       cout<<"\nNo_of_100_Notes"<<No_of_100_Notes;
       cout<<"\nNo_of_50_Notes"<<No_of_50_Notes;
       cout<<"\nNo_of_20_Notes"<<No_of_20_Notes;
       cout<<"\nNo_of_10_Notes"<<No_of_10_Notes;
       
    

    return 0;
}
