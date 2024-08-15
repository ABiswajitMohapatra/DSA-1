// Program to check if two arrays are disjoint :
#include <iostream>
using namespace std;
int check_disjoint(int A[],int B[],int size1,int size2){
    for(int i=0;i<size1;i++){
       if(A[i]==B[i]){
        return false;
       }
    }
    return true;
}
int main() {
    int A[]={2,3,7,5,9};
    int B[]={1,6,4,19,21};
    int size1=sizeof(A)/sizeof(A[0]);
    int size2=sizeof(B)/sizeof(B[0]);
    int res=check_disjoint(A,B,size1,size2);
    if(res)
        cout<<"Two array are disjoint";
    else cout<<"Both are not disjoint ";
    return 0;
}