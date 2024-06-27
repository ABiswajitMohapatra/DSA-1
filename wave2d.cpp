#include <iostream>
using namespace std;
void wave(int A[][3],int row,int col){
        for(int j = 0; j < col; j++){
            if(j%2==0){
                for(int i=0;i<row;i++){
                    cout<<A[j][i]<<" ";
                }
                cout<<endl;
            }else{
                for(int i=row-1;i>=0;i--){
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
    wave(A,3,3);
}