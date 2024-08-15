#include <iostream>
using namespace std;
int check_palindrome(int A[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        if(A[left]!=A[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    int A[]={1,9,1,2,3,2,1,9,1};
    int size=sizeof(A)/sizeof(A[0]);
    int res=check_palindrome(A,size);
    if(res)  cout<<"palindrome";
    else  cout<<"not palindrome";
    return 0;
}