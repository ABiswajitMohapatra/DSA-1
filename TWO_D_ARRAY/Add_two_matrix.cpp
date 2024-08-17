#include <iostream>
using namespace std;
void Addition(int A[][3],int B[][3],int row,int col){
    int sum[3][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=A[i][j]+B[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int A[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[][3]={{1,1,2},{2,2,3},{5,6,3}};
    int row=3;
    int col=3;
    Addition(A,B,row,col);
    return 0;
}