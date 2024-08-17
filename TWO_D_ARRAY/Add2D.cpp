#include <iostream>
using namespace std;
int Add(int A[][3],int row,int col){
    int sum=0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum+=A[i][j];
        }
        }
 return sum;
}
int main() {
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cout<<"Sum:"<<(Add(A, 3, 3));
}