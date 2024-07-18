#include <iostream>
using namespace std;
void spiral(int A[][3],int row,int col){
    int toprow=0;
    int botrow=row-1;
    int leftcol =0;
    int rightcol=col-1;
    while(toprow<=botrow && leftcol<=rightcol){
        //print top row:
        for(int i=leftcol;i<=rightcol;i++){
            cout<<A[toprow][i]<<" ";
        }
        toprow++;
        //right
        for(int i=toprow;i<=botrow;i++){
            cout<<A[i][rightcol]<<" ";
        }
        rightcol--;
    }
    for(int i=rightcol;i>=leftcol;){

    }
   
}
int main() {
    int A[3][3]={1,2,3,4,5,6,7,8,9};

    
}