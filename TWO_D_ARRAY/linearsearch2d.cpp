#include <iostream>
using namespace std;
void search(int A[][3],int row,int col,int key){
     bool found=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(A[i][j]==key){
                found=true;
                cout<<"ELement found at :"<<"("<<i<<","<<j<<")";
                break;
            }
        }
          if(found){
            break;
          }
    }
    if(!found){
        cout<<"Not found"<<endl;
    }
    }

int main() {
    int key=92;
    const int row=3;
    const int col=3;
    int A[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    search(A,row,col,key);
    return 0;
}