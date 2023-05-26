// program to tell a leap year

 #include <iostream>
 using namespace std;
 int main()
 {
     int YEAR;
     cin>>YEAR;
     if ( YEAR%400 == 0)
     {
        cout<<"LEAP YEAR";
     }
     else
     {
         if ( YEAR%100 == 0)
        {
         cout<<"NOT A LEAP YEAR";
        }
        else
         {
            if ( YEAR%4 == 0)
            {
              cout<<"LEAP YEAR";
            }
            else
            {
               cout<<"NOT A LEAP YEAR";
            }

         }
    }
    return 0;
}
