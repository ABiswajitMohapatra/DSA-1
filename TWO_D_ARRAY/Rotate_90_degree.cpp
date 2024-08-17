#include <iostream>
using namespace std;
void Rotate_90(int A[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=A[i][j];
            A[i][j]=A[i][n-j-1];
            A[i][n-j-1]=temp;
        }
    }
   
}
int main() {
    int A[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    cout<<"matrix before rotate"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    Rotate_90(A,n);
     cout<<"matrix after 90 degree rotate:"<<endl;;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}