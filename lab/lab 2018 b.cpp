#include<iostream>

using namespace std;

int main(){
	int choice=0;
	char A[8][6];
	for(int i=0;i<8;i++){
		for(int j=0;j<6;j++)
			A[i][j]='*';
	}
	while(choice!=-1)
	{
		int type,floor,smoke,room;
		
		cout<<"Press 1 for First Class And 2 for economy \n1.First Class \n2.Economy\n:";
		cin>>type;
		switch(type)
		{
			case 1:
				cout<<"1.first floor \n2.Second floor\n:";
				cin>>floor;
				break;
			case 2:
				cout<<"1.Smoking  \n2.non smoking";
				cin>>smoke;
				if (smoke==1)cout<<"3.third floor \n4. \n5.";	
				if (smoke==2)cout<<".\n6.\n7.\n8.";
				cin>>floor;
				break;
		}
		cout<<"enter room choice:";
		cin>>room;
		if(A[floor-1][room-1]!='X'){
			A[floor-1][room-1]='X';
			cout<<"room allocated to you";
		else
			cout<<"Not AVaiilable\n";
		for(int i=0;i<8;i++){
			cout<<"Floor "<<i+1<<"  "; 
			for(int j=0;j<6;j++)
				cout<<A[i][j]<<"  	";
		 cout<<endl;
		}
	};
}
