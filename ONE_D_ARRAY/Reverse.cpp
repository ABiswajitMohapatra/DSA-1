#include <iostream>
using namespace std;
void Reverse(int A[],int size){
    int i=0,j=size-1,temp;
    while(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
    cout<<"Revresed order :";
    for(int i=0;i<5;i++){
      cout<<A[i]<<" ";
    }
}
int main() {
    int A[]={34,56,12,78,90};
    Reverse(A,5);
    return 0;
}