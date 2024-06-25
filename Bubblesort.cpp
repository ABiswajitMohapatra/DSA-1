#include <iostream>
using namespace std;
void Bubblesort(int A[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(A[i]<A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
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
   
}