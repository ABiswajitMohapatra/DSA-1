#include <iostream>
using namespace std;
void product(int A[],int size){
    int pro=1;
    for(int i=0;i<size;i++){
        pro*=A[i];
    }
    for(int i=0;i<size;i++){
        cout<<pro/A[i]<<" ";
    }
     cout<<endl;
}
int main() {
    int A[]={2,-4,5,-6};
    int size=sizeof(A)/sizeof(A[0]);
    product(A,size);
    return 0;
}