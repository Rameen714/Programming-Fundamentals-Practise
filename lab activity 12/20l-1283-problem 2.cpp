#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
int a=0,b=0,c=0,d=0,w=0,e=0;
using namespace std;
int compare(string F, string S){

    a=F.size();
    b=S.size();
    if (a==b)
    {
        cout<<"\nBOTH HAVE EQUAL VALUES"<<endl;
        return 0;
    }
    if (a>b)
    {
        cout<<"\nFRIST ONE HAS GREATER VALUE"<<endl;
        return 1;
    }
    if (a<b)
    {
        cout<<"\nSECOND ONE HAS GREATER VALUE"<<endl;
        return -1;
    }

}

string Add(string F, string S){
    string str;
    a=F.size();
    b=S.size();

    if (a>b)
        {
            c=a;
            d=b;
        }
    else
        {
            c=b;
            d=a;
        }
    for(unsigned i=c , j=d;i>0 , j>0;i-- , j--)
        {
            int Char_to_num1=F[i]-'0';
            int Char_to_num2=S[j]-'0';
            int Char_to_num3;
            Char_to_num3=Char_to_num1+Char_to_num2;
            str[i]=(Char_to_num3+ '0');

        }

    return str;
}
string Sub(string F, string S){
    string str;
    a=F.size();
    b=S.size();

    if (a>b)
        {
            c=a;
            d=b;
        }
    else
        {
            c=b;
            d=a;
        }
    for(unsigned i=c , j=d;i>0 , j>0;i-- , j--)
        {
            int Char_to_num1=F[i]-'0';
            int Char_to_num2=S[j]-'0';
            int Char_to_num3;
            Char_to_num3=Char_to_num1-Char_to_num2;
            str[i]=(Char_to_num3+ '0');

        }

    return str;
}

int main(){

    string F,S;

    cout<<"Enter 1st value :"; getline(cin,F);
    cout<<"Enter 2nd value :";  getline(cin,S);


    compare( F, S);
    Add( F, S);
    Sub( F, S);
    return 0;
}
    /*int i=0;
    while ()
        {
            cin>>F[i];
            i++;
        }
    cout<<endl;
    i=0;
    while (S[i]!="")
        {
            cin>>S[i];
            i++;
        }
        */
