#include <iostream>
using namespace std;
void union_(int A[],int s1,int B[],int s2){
    int c[s1+s2];
    int s3=sizeof(c)/sizeof(c[0]);
  for(int i=0;i<s1;i++){
    c[i]=A[i];
  }
  for(int i=0;i<s3;i++){
    c[s1+i]=B[i];
  }
//  cout<<"Merged array after concatenate:";
//   for(int i=0;i<s3;i++){
//     cout<<c[i]<<" ";
//   }
//cout<<endl;
cout<<"Union if two array:";
for(int i=0;i<s3;i++){
   bool istrue=false;
   for(int j=0;j<i;j++){
    if(c[i]==c[j]){
        istrue=true;
    }
   }
   if(!istrue){
    cout<<c[i]<<" ";
   }
  }
}
int main() {
    int A[]={2,3,4,5,6,78};
    int B[]={1,4,2,3,89,1,1,23,23,90};
    int s1=sizeof(A)/sizeof(A[0]);
    int s2=sizeof(B)/sizeof(B[0]);
    union_(A,s1,B,s2);
    return 0;
}