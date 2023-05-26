#include<iostream>
#include<cmath>

using namespace std;

void in(float data[],int size){
	
	for(int i=0;i<size;i++)
		cin>>data[i];
	cout<<endl;
}

int out(float data[],int size){
	
	for(int i=0;i<size;i++)
		cout<<data[i]<<" ";
	cout<<endl;	
}

float getAverage(float data[],int size){
	
	float sum=0;float avg=0;
	for(int i=0;i<size;i++){
		sum+=data[i];
	}
	avg=sum/(size-1);
	return avg;
}

float getStdDev(float data[],int size){
	
	float avg=getAverage(data,size);
	float std=0;
	int somethin=0,somethin2=0;
	for(int i=0;i<size;i++){
		somethin=(data[i]-avg);
		somethin*=somethin;
		somethin2+=(somethin/(size));
	}
	//std=somethin2/(size);
	std=pow(somethin2,0.5);
	return std;
}

float percentage(float data[],int size,float average,float std){
	
	int count=0;
	float one=0 ,two=0,per=0;
	one=average-std;
	two=average+std;
	for(int i=0;i<size;i++){
		if(data[i]>one && data[i]<two)
			count+=1;
	}
	//cout<<endl<<"incoming"<<count<<endl;	
	per=(count*100)/size;
	//cout<<endl<<"incoming"<<per<<endl;
	return per;
}

int main(){
	float data[10];
	int size =10;
	in(data,size);
	out(data,size);
	float average = getAverage(data,size);
	float std = getStdDev(data,size);
	cout<<average<<endl<<std<<endl;
	float per = percentage(data,size,average,std);
	cout<<per<<endl;
	if(per>65 && per<75)
		cout<<"good bell shape\n";
	else
		cout<<"bad bell shape\n";
	
	return 0;
}
