#include <iostream>
using namespace std;

void Bubblesort(int A[],int size){
    cout<<"Bubble sort: ";
  for(int i=0;i<size -1;i++){
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
  cout<<endl;
}

void selection(int A[],int size){
    cout<<"Selection sort: ";
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
  int A[]={23,45,12,1,27,89};
  int size=sizeof(A)/sizeof(A[0]);
Bubblesort(A,size);
selection(A,size);
   
}