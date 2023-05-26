#include<iostream>

using namespace std;

int main(){

    int n,i;
    cout<<"Enter the counter number : ";
    cin>>n;
    for(int c=n,i=1;c>=1;i++,c--)
        {
            int b=c;
            do
            {
                c=c/2;
            }
            while(c>2);

            if (c==1)
                b--;
            if (c==0)
                b=b/2;
            c=b;
        }
    if (i%2==1) cout<<"Winner: Player 2";
    else        cout<<"Winner: Player 1";

    return 0;
}
