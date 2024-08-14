#include <iostream>
using namespace std;
#include <cmath>  
bool contain_duplicates(int A[],int size,int k){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]==A[j]&& abs(i-j)<=k){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int A[]={3,4,5,1,8,5,6,7,8,4};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<contain_duplicates(A,size,3);
    return 0;
}