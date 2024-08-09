#include <iostream>
using namespace std;
void SelectionSort(int A[],int size){
    int min;
    for(int i=0;i<size-1;i++){
      min=i;
      for(int j=i+1;j<size;j++){
        if(A[min]<A[j]){
           min=j;
        }
      }
      int temp=A[i];
      A[i]=A[min];
      A[min]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={34,78,12,15,10,234};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"The sorted array is: ";
    SelectionSort(A,size);
    return 0;
}