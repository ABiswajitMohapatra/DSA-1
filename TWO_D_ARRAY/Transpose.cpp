#include <iostream>
using namespace std;
void trans(int A[][3],int row,int col){
      for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
      }
}
int main() {
    int A[][3]={{1,2,3},{4,5,6},{7,8,9}};
    const int row=3;
    const int col=3;
    trans(A,row,col);
    return 0;
}