#include <iostream>
using namespace std;
void search(int A[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(A[i]==target && A[j]==target){
                cout<<i<<","<<j;
            }
        }
    }
    cout<<"not found";
}
int main() {
    int A[]={34,56,78,12,34,76,90};
    int size=sizeof(A)/sizeof(A[0]);
    search(A,size,90);
    return 0;
}