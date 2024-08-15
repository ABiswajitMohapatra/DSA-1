#include <iostream>
using namespace std;
void Left_rotation(int A[],int size){
    int temp=A[0];
    for(int i=0;i<size;i++){
        A[i-1]=A[i];
    }
    A[size-1]=temp;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={2,3,4,5,6};
    int size=sizeof(A)/sizeof(A[0]);
    Left_rotation(A,size);
    return 0;
}