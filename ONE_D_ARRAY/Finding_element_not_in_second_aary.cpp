#include <iostream>
using namespace std;
int Display(int A[],int size1,int B[],int size2){
 for(int i=0;i<size1;i++){
    bool found=true;
    for(int j=0;j<size2;j++){
        if(A[i]==B[j]){
            found=false;
            break;
        }
    }
    if(found){
       return A[i];
    } 
 }
   return -1;
}
int main() {
    int A[]={3,5,6,7,8};
    int B[]={3,6,7,8};
    int size1=sizeof(A)/sizeof(A[0]);
    int size2=sizeof(B)/sizeof(B[0]);
    cout<< Display(A,size1,B,size2);
    return 0;
}