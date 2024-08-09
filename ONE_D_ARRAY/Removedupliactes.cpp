#include <iostream>
using namespace std;
void remove(int A[],int size){
    for(int i=0;i<size;i++){
        bool istrue=false;
        for(int j=0;j<i;j++){
           if(A[i]==A[j]){
            istrue=true;
           break;
           }
        }  
        if(!istrue){
            cout<<A[i]<<" ,";
        }
        }
    }
int main() {
    int A[]={1,2,3,4,56,2,1,23,2};
    int size=sizeof(A)/sizeof(A[0]);
    remove(A,size);
    return 0;
}