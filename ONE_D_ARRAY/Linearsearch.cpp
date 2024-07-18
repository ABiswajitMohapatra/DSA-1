// #include <iostream>
// using namespace std;
// void linear(int A[],int size,int key){
//     int found=-1;
//     for(int i=0;i<size;i++){
//         if(A[i]==key){
//             found=i;
//             break;
//         }
//     }
//     if(found!=-1){
//         cout<<found<<endl;
//     }else{
//         cout<<"not found"<<endl;
//     }
// }
// int main() {
//     int A[]={12,45,32,67,78};
//     linear(A,5,126);
//     return 0;
// }


#include <iostream>
using namespace std;
void search(int A[][3],int row,int col,int key){
    int found=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(A[i][j]==key){
                found=i,j;
                break;
            }
        }
          if(found!=-1){
           cout<<"found at "<<found<<endl;
          }else{
          cout<<"not found"<<endl;
          }
    }
    
    }

int main() {
    int key=9;
    const int row=3;
    const int col=3;
    int A[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    search(A,row,col,key);
    return 0;
}