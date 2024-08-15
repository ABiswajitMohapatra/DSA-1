#include <iostream>
using namespace std;
void Sex(int A[],int size,int target){
    for(int i=0;i<size;i++){
        if(A[i]!=target){
            cout<<A[i]<<" ";
        }
    }
}
int main() {
    int A[]={2,3,4,5,6,7,4,9,4,4,9};
    int size=sizeof(A)/sizeof(A[0]);
    Sex(A,size,4);
    return 0;
}