#include <iostream>
using namespace std;

void iskeypresent(int A[][3], int target, int row, int col){
    int ishai = -1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(A[i][j] == target){
                ishai = i;
                ishai = i;
                break;
            }
        }
    }
    if(ishai != -1){
        cout << "Key found: " << ishai << endl;
    } else {
        cout << "Key not found" << endl;
    }
}

int main(){
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    iskeypresent(A, 7, 3, 3);
    return 0;  // Added return statement
}
