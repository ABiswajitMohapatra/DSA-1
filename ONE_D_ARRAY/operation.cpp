
//INSERTION AT  A PARTICULAR POSITION:
/*
include <iostream>
using namespace std;
void Insert(int A[],int size,int pos,int element){
  for(int i=size-1;i>=pos;i--){
    A[i+1]=A[i];
  }
  A[pos]=element;
  for(int i=0;i<size+1;i++){
    cout<<A[i]<<" ";
  }
}
int main() {
    int A[]={1,2,3,4,5,6};
    int size=sizeof(A)/sizeof(A[0]);
    int pos=0;
    int element=23;
    Insert(A,size,pos,element);
    return 0;
}

*/

//DELETION AT  A PARTICULAR POSITION:


/*
#include <iostream>
using namespace std;
void Insert(int A[],int size,int pos){
  for(int i=pos;i<=size;i++){
    A[i]=A[i+1];
  }

  for(int i=0;i<size-1;i++){
    cout<<A[i]<<" ";
  }
}
int main() {
    int A[]={1,2,3,4,5,6};
    int size=sizeof(A)/sizeof(A[0]);
    int pos=4;
    Insert(A,size,pos);
    return 0;
}

*/

//LEFT ROTATION:

#include <iostream>
using namespace std;
void LeftRotation(int A[],int size){
   int  temp=A[0];
    for(int i=1;i<size;i++){
        A[i-1]=A[i];
    }
    A[size-1]=temp;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main() {
     int A[]={123,121,2,3,4,5,6};
    int size=sizeof(A)/sizeof(A[0]);
    LeftRotation(A,size);
    return 0;
}
