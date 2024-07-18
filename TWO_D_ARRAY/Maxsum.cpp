#include <iostream>
using namespace std;
int Maxsum(int A[][3],int row,int col){
    int maxsum=-1;
    for(int i = 0; i < row; i++){
        int sum=0;
        for(int j = 0; j < col; j++){
            sum+=A[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
        }
        if (sum<0){
            sum=0;
        }
        }
 return maxsum;
}
int main() {
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cout<<"Sum:"<<(Maxsum(A, 3, 3));
}