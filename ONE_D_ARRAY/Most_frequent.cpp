#include <iostream>
using namespace std;
int Most_see(int A[],int size){
    int max=0;
    int res=A[0];
    for(int i=0;i<size;i++){
          int count=0;
          for(int j=0;j<size;j++){
            if(A[i]==A[j]){
                count++;
            }
            if(count>max){
                max=count;
                res=A[i];
            }
          }
    }
    return res;
}
int main() {
    int A[]={4,56,1,1,5,6,2,2,2};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<Most_see(A,size);
    return 0;
}