#include <iostream>
using namespace std;

int main(){
/*  int A[3];
    A[0]=12;
    A[1]=23;
    A[2]=20;
    for(int i=0;i<sizeof(A[0]);i++){
        cout<<A[i]<<endl;
    }
   int B[]={11,22,33,44};
   for(int i=0;i<4;i++){
    cout<<B[i]<<endl;
   }
*/  
//input from user:
/*
int C[4];
for(int i=0;i<4;i++){
      cin>>C[i];
}
cout<<"printing elements are:"<<endl;
for(int i=0;i<sizeof(C[0]);i++){
    cout<<C[i]<<endl;
}
*/
// check Updation is working  or not:
/*
int x[]={12,45,89,56};
cout<<x[2]<<endl;
x[0]=101;
for(int i=0;i<4;i++){
    cout<<x[i]<<endl;
}
//Reverse order:
for(int i=sizeof(x[0]);i>=0;i--){
    cout<<x[i]<<endl;
}
*/

//Acsending or not:
/*
int A[]={10,23,45,67,89,2};
bool isAsc=true;
for(int i=0;i<5;i++){
    if(A[i]>A[i+1]){
        isAsc=false;
        break;
    }
}
if(isAsc){
    cout<<"Acsending"<<endl;
}else{
    cout<<"Not"<<endl;
}

//sorting the array:
int B[]={23,78,3,9,33};
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(B[j]>B[j+1]){
            int temp=B[j];
            B[j]=B[j+1];
            B[j+1]=temp;
        }
    }
}
for(int i=0;i<5;i++){
    cout<<B[i]<<" ";
}
*/



// Address of Array:
int A[]={123,456,789,834,523};
int *ptr=A;
cout<<&A<<endl;
cout<<ptr<<endl;


//Traversing of Array without indices:
int B[]={23,78,56,90,99,102};
cout<<*B<<endl;
cout<<*(B+1)<<endl;
cout<<*(B+2)<<endl;
cout<<*(B+3)<<endl;
cout<<*(B+4)<<endl;
cout<<*(B+5)<<endl;


int A12[]={1,2,3,4,5};
int key=3;
int found=-1;
for(int i=0;i<5;i++){
    if(A12[i]==key){
        found=i;
        break;
    }
}
if(found!=-1){
    cout<<"found at :"<<found;
}else{
    cout<<"not found"<<endl;
}
}



//Array is an userdefined or derived  data type which is homogenous collection of data type stored in contiguous memory location.