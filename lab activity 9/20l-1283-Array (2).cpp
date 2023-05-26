#include<iostream>
#include<fstream>

using namespace std;
#define Max 10

int A[Max][Max]={};
int B[Max][Max]={};
int ROWS, COLS, Choice, a,b;

void copy_array(int  B[][Max]){
    for(int i =0;i<ROWS;i++){
        for(int j=0;j<COLS;j++)
            B[i][j]=A[i][j];
    }
}

void show_array(int  B[][Max]){
    for(int i =0;i<ROWS;i++){
        for(int j=0;j<COLS;j++)
            cout<<B[i][j]<<" ";
        cout<<endl;    
    }
}

void ShiftLeft(int Row){
    
    for(int j=0;j<=COLS;j++){
        B[Row][j]=A[Row][j+1];
        if (j==COLS) B[Row][j-1]=A[Row][0];
    }
}              

void ShiftRight(int Row){
    
    for(int j=0;j<=COLS;j++){
        B[Row][j]=A[Row][j-1];
        if (j==COLS) B[Row][0]=A[Row][j-1];
    }
}             

void ShiftUp(int Col){
    
    for(int j=0;j<=ROWS;j++){
        B[j][Col]=A[j+1][Col];
        if (j==ROWS) B[j-1][Col]=A[0][Col];
    }   

}               

void ShiftDown(int Col){
    
    for(int j=0;j<=ROWS;j++){
        B[j][Col]=A[j-1][Col];
        if (j==ROWS) B[0][Col]=A[j-1][Col];
    }
}              //done

void showArray(int Rows, int Cols){
    
    for(int i =0;i<Rows;i++){
        for(int j=0;j<Cols;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}   //done

void inputArray(int Rows, int Cols){

    for(int i =0;i<Rows;i++){
        for(int j=0;j<Cols;j++)
            cin>>A[i][j];
    }
}   //done

int getChoice(string Message, int Low_Limit, int Up_Limit){
    int Choice = Low_Limit;

    do{
        cout<<Message<<" "<<Low_Limit<<" and "<<Up_Limit<<" ";
        cin>>Choice;
    }while(Choice < Low_Limit || Choice >Up_Limit);

    return Choice;
}

int main(){
    string Menu = "\n\n0. Input Array\n1. Show Array\n2. Left Shift\n3. Right Shift \n4. Shift UP\n5. Shift Down\n6. Exit\n";
    
    ROWS = COLS = 0;
    do{
        cout<<Menu;
        cout<<"Enter Your Choice ";
        cin>> Choice;

        if(Choice == 0){
            ROWS = COLS = 1;
            do{
                if(ROWS < 1 || ROWS > 10 || COLS < 1 || COLS > 10)
                    cout<<"Values out of range\n\n\n\n\nLet us try again.\n\n";
                cout<< "\nHow Many Rows. A value between 1 and 10 ";
                cin>> ROWS;
                cout<< "\nHow Many Cols. A value between 1 and 10 ";
                cin>> COLS;
            }while(ROWS < 1 || ROWS > 10 || COLS < 1 || COLS > 10);

            inputArray(ROWS, COLS);
            copy_array(B);
            a=ROWS;
            b=COLS;
        }
        
        else if(Choice == 1 && ROWS > 0){
            showArray(ROWS, COLS);
        }
        else if(2== Choice && ROWS > 0){
            int Row = getChoice("Row Index ? A value between", 0, ROWS-1);
            copy_array(B);
            ShiftLeft(Row);
            show_array(B);
        }
        else if(3== Choice && ROWS > 0){
            int Row = getChoice("Row Index ? A value between", 0, ROWS-1);
            copy_array(B);
            ShiftRight(Row);
            show_array(B);
        }
        else if(4== Choice && ROWS > 0){
            int Col= getChoice("Col Index ? A value between", 0, COLS-1);
            copy_array(B);
            ShiftUp(Col);
            show_array(B);
        }
        else if(5== Choice && ROWS > 0){
            int Col= getChoice("Col Index ? A value between", 0, COLS-1);
            copy_array(B);
            ShiftDown(Col);
            show_array(B);
        }
        else if(ROWS == 0 && Choice !=6 )
            cout<<"\n\n\nArray NOT AVAILABLE\n\n\n";


    }while(Choice != 6);

    cout<<"Leaving Already. See You";

    return 0;
}
    //GM.Filter(GM2,Mask1);
    //GM2.Save("Filter.pgm");    //load and save in a new file
	//cout<<"File 1   ";
	//GM.load("mountain(2).pgm");
    //cout<<"File 1   ";
	//GM.Save("mountain(1).pgm");
	//GM.load("BUTTERFLY.pgm");
    //GM.meanFilter(GMS,3);
    //GM.Save("means.pgm");
    //GM.load("balloons.pgm");
        //cout<<Matrix<<" here2";
    //GM.Transform(GMS,Matrix);
    //GMS.Save("Transfrom.pgm");
    //GM.medianFilter(GM3,3);
    //GM3.Save("haha.pgm");
    //GM.Quantize(GM4,8);
    //GM4.Save("Quantize.pgm");
	//GM.combineTopToBottom(GM, 255);
    //GM.combineSideBySide(GM2, 255);
	//GM.FadeIn(GM2, 25, 10, "Result");
    //Rotate(grayImage& RotatedImage, double angle = 90, int aboutx = 0, int abouty = 0 )
    //Flip(grayImage& Result,int HorizontalOrVertical = 0)
    //changeBrightness(grayImage& Result,int amount)
    //GM.Negative(GM);
    //Quantize(grayImage& Result,int Levels)
    //GM.medianFilter(GM3, 3);
    //GM3.Save("median.pgm");
    //meanFilter(grayImage& Result, int filterSize = 3)
    //Resize(grayImage& Result,int NewRows, int NewColumns)
    //Resize(grayImage& Result,double Ratio)
    //Transform(grayImage& Result,int Matrix[3][3])
    //Filter(grayImage& Result,int Mask[3][3])
    
    
	//GM.DerivativeImage(GM);
    //GM.Save("derivative.pgm");
