#include <iostream>
using namespace std;
void selection(int A[],int size){
    int min;
    for(int i=0;i<size-1;i++){
        min=i;
        for(int j=i+1;j<size;j++){
         if(A[min]>A[j]){
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
int main(){
    cout<<"Enter size:";
    int size;
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
selection(A,size);
}