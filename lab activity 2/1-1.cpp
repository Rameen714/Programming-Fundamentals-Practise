// program to tell if a triangle can be  built provided inputs

#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A+B+C==180)
    {
        cout<<"A Triangle can be created using these angles";
    }
    else
    {
        cout<<"A Triangle cannot be created using these angles";
    }
    
    return 0;
}
