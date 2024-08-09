#include <iostream>
using namespace std;
void Multiplication(int A[][3],int B[][3],int row,int col){
    int C[3][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        C[i][j]=0;
        for(int k=0;k<row;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
        cout<<C[i][j]<<" ";
    }
cout<<endl;
}
}
int main() {
int A[][3]={{1,2,3},{4,5,6},{6,7,8}};
int B[][3]={{1,2,2},{2,4,5},{9,8,2}};
const int row=3;
const int col=3;
Multiplication(A,B,row,col);
    return 0;
}