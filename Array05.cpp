#include <iostream>
using namespace std;

int main() {
    
    int A[]={1,2,3,2,2,4,4,5};
    
    int len=sizeof(A)/sizeof(A[0]);
    int i=0;
    for(int j=i+1;j<len;j++){
        if(A[i]!=A[j]){
            i++;
            A[i]=A[j];
        }
    }
    for(int i=0;i<len;i++){
        cout<<A[i]<<" ";
    }
}