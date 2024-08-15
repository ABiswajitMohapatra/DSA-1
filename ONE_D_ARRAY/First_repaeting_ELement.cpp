#include <iostream>
using namespace std;
int First_element(int A[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(A[i]==A[j]){
              return A[i];
            }
        }
        }
    return -1;
}
int main() {
    int A[]={2,3,4,5,6,4,2,3};
    int size =sizeof(A)/sizeof(A[0]);
    cout<<First_element(A,size);
    return 0;
}
//24.Write a C++ program to find the first repeating element in an array of integers.?