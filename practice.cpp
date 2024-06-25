#include <iostream>
using namespace std;
int Firstindex(int A[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans;
    while(start<=end){
        if(A[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(A[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
    int main(){
        int size,key;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int A[size];
    for (int i = 0; i < size; i++){
        cin>>A[i];
    }
    cin>>key;
    cout<<Firstindex(A,size,key);
    }

