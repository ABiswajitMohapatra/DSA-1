#include <iostream>
using namespace std;
void Display(int A[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        if(A[left]%2==0){
            left++;
        }else{
            swap(A[left],A[right]);
            right--;
        }
    }
  for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
  }
}
int main() {
    int A[]={2,3,5,6,4,7,9};
    int size=sizeof(A)/sizeof(A[0]);
    Display(A,size);
    return 0;
}