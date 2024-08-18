#include <iostream>
using namespace std;
bool present(int A[],int size,int x){
  for(int i=0;i<size;i++){
    if(A[i]==x){
      return true;
    }
  }
  return false;
}
void Union_print(int A[],int B[],int s1,int s2){
  for(int i=0;i<s1;i++){
    cout<<A[i]<<" ";
  }
  for(int i=0;i<s2;i++){
    if(!present(A,s1,B[i])){
      cout<<B[i]<<" ";
    }
  }
}

int main() {
    int A[]={1,2,3,4,5,6};
    int B[]={3,4,5,8,9,7};
    int s1=sizeof(A)/sizeof(A[0]);
    int s2=sizeof(B)/sizeof(B[0]);
    Union_print(A,B,s1,s2);
    return 0;
}