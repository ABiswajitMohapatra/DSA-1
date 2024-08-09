#include <iostream>
using namespace std;
void BubbleSort(int A[],int size){
    for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1-i;j++){
        if(A[j]<A[j+1]){
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={34,78,12,15,10,234};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"The sorted array is: ";
    BubbleSort(A,size);
    return 0;
}