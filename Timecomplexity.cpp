//Time complexity->It is the amount of time by an algo to run as a function of length of the input":

/*
#include <iostream>
using namespace std;
int binary(int A[],int size,int key){
  int start=0;
  int end=size-1;
   int value=-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(A[mid]==key){
        value=mid;
        end=mid-1;
    } else if(A[mid]<key){
        start=mid+1;
    }  else{
        end=mid-1;
    }
  }
  return value;
}
int main() {
    int A[] = {2, 4,8, 6, 8, 10, 12, 8, 16, 18, 20};
    int size = sizeof(A) / sizeof(A[0]);
    int key= 8;  
    int index = binary(A, size, key);
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }   
    return 0;
}

*/

#include <iostream>
using namespace std;
int binary(int A[],int size,int key){
  int start=0;
  int end=size-1;
   int value=-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(A[mid]==key){
        value=mid;
        start=mid+1;
    } else if(A[mid]<key){
        start=mid+1;
    }  else{
        end=mid-1;
    }
  }
  return value;
}
int main() {
    int A[] = {2, 4,8, 6, 8, 10, 12, 8, 16, 18, 20};
    int size = sizeof(A) / sizeof(A[0]);
    int key= 8;  
    int index = binary(A, size, key);
    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }   
    return 0;
}