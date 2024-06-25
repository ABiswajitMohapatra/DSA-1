#include <iostream>
using namespace std;
void Bubblesort(int A[],int size){
  for(int i=size-1;i>0;i--){
    for(int j=0;j<i;j++){
        if(A[j]>A[j+1]){
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
     cout<<"Enter size:";
    int size;
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
Bubblesort(A,size);
    return 0;
}