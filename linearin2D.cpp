#include <iostream>
using namespace std;

bool iskeypresent(int A[][3], int target, int row, int col){
    int ishai = -1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(A[i][j] == target){
                return true;
            }
        }
    }
   return false;
}

int main(){
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cout<<iskeypresent(A, 7, 3, 3);
    return 0;  // Added return statement
}
