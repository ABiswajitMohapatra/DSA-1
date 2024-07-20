#include <iostream>
using namespace std;
void Occur(int A[],int size){
    for(int i=0;i<size;i++){
        if(A[i]!=-1){
            int count=1;
        for(int j=i+1;j<size;j++){
            if(A[i]==A[j]){
                count++;
                A[j]=-1;
            }
        }
    cout<<"Element "<<A[i]<<" occur "<<" is :"<<count<<endl;
    }
}
}
int main() {
      int A[]={2,3,4,2,3,4,2,5,2,3,4,1,1,1,1,1,1};
    int size=sizeof(A)/sizeof(A[0]);
    Occur(A,size);
    return 0;
}