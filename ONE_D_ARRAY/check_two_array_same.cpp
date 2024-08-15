#include <iostream>
using namespace std;
int Check_array(int A[],int B[],int size1,int size2){
    if(size1!=size2){
        return false;
    }
  for(int i=0;i<size1;i++){
        if(A[i]!=B[i]){
            return false;
    }
  }
  return true;
}
int main() {
    int A[]={2,3,4,5,6};
    int B[]={2,3,4,5,5};
    int size1=sizeof(A)/sizeof(A[0]);
    int size2=sizeof(B)/sizeof(B[0]);
    int res=Check_array(A,B,size1,size2);
    if(res)
        cout<<"Two array are equal";
    else cout<<"Both are not equal ";
    return 0;
}
//Program to check if two arrays are equal (i.e., contain the same elements in the same order).