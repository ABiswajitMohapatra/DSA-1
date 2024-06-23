
//INSERTION AT  A PARTICULAR POSITION:
/*
#include <iostream>
using namespace std;
void Insert(int A[],int size,int pos,int ele){
    for(int i=size;i>=pos;i--){
        A[i+1]=A[i];
    }
    A[pos]=ele;
    for(int i=0;i<size+1;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size,pos,ele;
    cout<<"Enter size:";
    cin>>size;
    int A[size];
    cout <<"Enter array elements:";
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Enter postion:";
    cin>>pos;
    cout<<"Enter element";
    cin>>ele;
    Insert(A,size,pos,ele);
}

*/
// DLELETION:
/*
#include <iostream>
using namespace std;
void Insert(int A[],int size,int ele){
    for(int i=ele;i<size;i++){
        A[i]=A[i+1];
    }
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size,ele;
    cout<<"Enter size:";
    cin>>size;
    int A[size];
    cout <<"Enter array elements:";
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Enter element:";
    cin>>ele;
    Insert(A,size,ele);
}


*/
#include <iostream>
using namespace std;
void bubblesort(int A[],int size){
   for(int i=0;i<size;i++){
    for(int j=0;j<size-1;j++){
        if(A[j]<A[j+1]){
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
   }
   for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
   }
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int A[size];
    cout <<"Enter array elements:";
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    bubblesort(A,size);
}