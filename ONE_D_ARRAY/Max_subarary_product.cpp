#include <iostream>
using namespace std;
int Product(int A[],int size){
    int max=-1;
    int mul=1;
    for(int i=0;i<size;i++){
        mul=mul*A[i];
        if(mul>max)  max=mul;
        if(mul<0)    mul=1;
    }
    return max;
}
int main() {
    int A[]={6, -3, -10, 0, 2};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Product(A,size);
    return 0;
}