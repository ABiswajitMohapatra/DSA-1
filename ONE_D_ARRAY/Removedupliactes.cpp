#include <iostream>
using namespace std;
void remove(int A[],int size){
    bool found=true;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           if(A[i]==A[j]){
            found=false;
            cout<<A[i]<<" ";
            break;
           }
        }  
    }
  cout<<"not found";
}
int main() {
    int A[]={1,2,3,4,56,2,1,23,2};
    int size=sizeof(A)/sizeof(A[0]);
    remove(A,size);
    return 0;
}