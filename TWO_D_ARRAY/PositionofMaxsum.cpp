#include <iostream>
using namespace std;
int Maxsum(int A[][3],int row,int col){
    int maxsum=-1;
    int index;
    for(int i = 0; i < row; i++){
        int sum=0;
        for(int j = 0; j < col; j++){
            sum+=A[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            index=i;
        }
        }
 return index;
}
int main() {
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cout<<"Index:"<<(Maxsum(A, 3, 3));
}