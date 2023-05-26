#include<iostream>

using namespace std;

void out(int Z[],int z){

    for(int q=0;q<z;q++)
        cout<<Z[q]<<" ";
    cout<<endl<<endl;
}

void in(int Z[],int z){

    for(int q=0;q<z;q++){
        cin>>Z[q];
    }
    cout<<endl;
}

void merg(int A[],int B[],int m ,int n,int c,int C[]){

    int i=0,j=0,k=0;
    for(;k<c;k++){
        if(i==m-1){
           	C[k]=B[j];
          	j++;
		}
		else if(j==n-1){
       		C[k]=A[i];
            i++;
		}
		else if(A[i]==B[j])
		{
			C[k]=A[i];
			i++;
			k++;
			C[k]=B[j];
			j++;
			
		}
        else if(A[i]<B[j]){

            C[k]=A[i];
        	i++;
        }
        else if(A[i]>B[j]){

			C[k]=B[j];
   			j++;
		}
    }
    out(C,c);
    return;
}

int main(){
    int m,n,c;
    cin>>m>>n;
    c=m+n;
    int A[m],B[n],C[c];
    in(A,m);
    in(B,n);
    out(A,m);
    out(B,n);
    merg(A,B,m,n,c,C);
    return 0;
}
