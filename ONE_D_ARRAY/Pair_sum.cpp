#include <iostream>
using namespace std;
void pair_Sum(int A[],int size,int key){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]+A[j]==key){
                cout<<A[i]<<" "<<A[j]<<endl;
            }
        }
        }
        }
int main() {
    int A[]={3,4,5,6,7,8,9,2,11,1};
    int size=sizeof(A)/sizeof(A[0]);
    pair_Sum(A,size,12);
    return 0;
}
//Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.