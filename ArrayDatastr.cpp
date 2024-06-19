//ARRAY IS AN USERDEFINED OR DERIVED DATA TYPE WHICH IS COLLECTION OF  HOMOGENEOUS DATA TYPE WITH CONTIGUOUS MEMORY LOCATION:
//INDEXING =SIZE-1
#include <iostream>
using namespace std;
 int main() {
//  int A[]={12,34,56,78,90};
//  for(int x:A){
//     cout<<x<<endl;
//  }
//  cout<<A[0]<<endl;
//  cout<<A[6]<<endl;//Array out of bound
// //Garbage value:
// int B[5];
//  for(int y:B){
//     cout<<y<<endl;
//  }

// Input from the user
//   int C[5];
//   for(int i=0;i<5;i++){
//     cin>>C[i];
//   }
//   for(int v:C){
//     cout<<v<<endl;;
//   }


  int D[]={10,24,30,40,50};
  int sum=0;
  float avg=0.0f;
  int count=0;
  for(int i=0;i<5;i++){
    sum+=D[i];
    count++;
  }
  cout<<"Sum of elements is:"<< sum<<endl;
   avg=(float)sum/count;
  cout<<"Avg is :"<<avg<<endl;
}