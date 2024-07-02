#include <iostream>
using namespace std;
int first_index(int A[],int size,int key){
  int start=0;
  int end=size-1;
  int ans;
  while(start<=end){
    int mid=(start+end)/2;
    if(A[mid]==key){
      ans=mid;
      end=mid-1;
    }else if(A[mid]<key){
     start=mid+1; 
    }else{
      end=mid-1;
    }
  }
  return ans;
}
int last_index(int A[],int size,int key){
  int start=0;
  int end=size-1;
  int ans;
  while(start<=end){
    int mid=(start+end)/2;
    if(A[mid]==key){
      ans=mid;
      start=mid+1;
    }else if(A[mid]<key){
     start=mid+1; 
    }else{
      end=mid-1;
    }
  }
  return ans;
}
int count(int A [],int size,int key){
  return  last_index(A,size,key)-first_index(A,size,key)+1;
}
int main() {
    int size;
    cout<<"enter your size:";
    cin>>size;
    int A[size];
    cout<<"enter array :";
    for(int i=0;i<size;i++){
      cin>>A[i];
    }
    cout<<"enter key:";
    int key;
    cin>>key;
  //  cout<<first_index(A,size,key);
  //   cout<<last_index(A,size,key);
   cout<<count(A,size,key);
    return 0;

}