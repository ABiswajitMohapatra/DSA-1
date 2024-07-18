#include <iostream>
using namespace std;
void indexofTarget(int A[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(target==A[i][j]){
            cout<<i<<","<<j;
            return;
           }
        }
       
    }
     cout<<"Not found "<<endl;
}
int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5,  7}, {8, 10,  12}};
    indexofTarget(A,3,3,3);
}