#include <iostream>
using namespace std;
void Print(int A[][3],int col,int row){
   for(int i=0;i<col;i++){
    if(i%2==0){
        for(int j=0;j<row;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }else{
        for(int j=row-1;j>=0;j--){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
   }
}
int main() {
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    Print(A,3,3);
}
