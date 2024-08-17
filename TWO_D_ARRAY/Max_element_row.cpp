//Find maximum element of each row in a matrix?
#include <iostream>
using namespace std;
void MAx_ele(int A[4][4],int row,int col){
    for(int i=0;i<row;i++){
         int max=A[i][0];
        for(int j=0;j<col;j++){
            if(A[i][j]>max){
                max=A[i][j];
            }
        }
        cout<<"Max element in row :"<<i<<"->"<<max<<endl;
    }
     
    
}
int main() {
    int A[][4]={ {3, 4, 1, 8},
                    {1, 4, 9, 11},
                    {76, 34, 212, 1},
                    {2, 1, 4, 5} };
    int row=4;
    int col=4;
    cout<<"Max element in the matrix:"<<endl;
    MAx_ele(A,row,col);
    return 0;
}