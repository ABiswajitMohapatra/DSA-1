#include <iostream>
using namespace std;
void Distinct(int A[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(A[i]==A[j]){
                count++;
            }
        }
        if(count==1){
            cout<<A[i]<<" ";
        }
    }cout<<endl;
}

void All_unique(int A[],int size){
    for(int i=0;i<size;i++){
        bool sex=true;
        for(int j=0;j<i;j++){
            if(A[i]==A[j]){
                sex=false;
                break;
            }
        }
        if(sex){
            cout<<A[i]<<" ";
        }
    }
}
int main() {
    int A[]={1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int size=sizeof(A)/sizeof(A[0]);
    Distinct(A,size);
    All_unique(A,size);
    return 0;
}
//Write a C++ program to find and print all distinct elements of a given array of integers.?