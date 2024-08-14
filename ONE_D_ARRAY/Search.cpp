#include <iostream>
#include <utility>
using namespace std;
void found(int A[],int size,int target,int &index1,int &index2){
    index1=-1;
    index2=-1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(A[i]==target && A[j]==target){
            index1=i;
            index2=j;
            return ;
           }  
        }
    }
}
int main() {
    int A[]={34,56,78,56,78,90};
    int size=sizeof(A)/sizeof(A[0]);
    int index1,index2;
    found(A,size,78,index1,index2);
    cout<<index1<<" "<<index2<<endl;
   
    return 0;
}