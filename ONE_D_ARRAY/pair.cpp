#include <iostream>
using namespace std;
void pairsum(int A[],int size){
    bool ispair=false;
    int key=12;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
  if(A[i]+A[j]==key){
    cout<<A[i]<<" "<<A[j]<<" ";
    ispair=true;
  }
    }
    }
    if(!ispair){
        cout<<"nehi mila"<<endl;
    }
}
int main() {
   int A[]={3,4,5,6,7,8,9,2,11,1};
   int size=sizeof(A)/sizeof(A[0]);
   pairsum(A,size);
}