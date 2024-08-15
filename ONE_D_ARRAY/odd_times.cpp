#include <iostream>
using namespace std;
int Display(int A[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(A[i]==A[j])
                count++;
        }
        if(count%2!=0)
            return A[i];
    }
    return -1;
}
int main() {
    int A[]={2,2,3,3,5,5,6,6,6};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"The number of odd times :"<<Display(A,size);
    return 0;
}