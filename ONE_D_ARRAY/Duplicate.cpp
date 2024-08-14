#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool Duplicatehai_kinhi(int A[],int size){
    sort(A,A+size);
    for(int i=1;i<size;i++){
       if(A[i]==A[i-1]){
        return true;
       }
    }
    return false;
}
int main() {
    int A[]={3,4,5,1,8};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Duplicatehai_kinhi(A,size);
    return 0;
}