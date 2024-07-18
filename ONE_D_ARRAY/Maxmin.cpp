#include <iostream>
using namespace std;
// void Max_num(int arr[],int size){
//     int max=arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max<<endl;
    void Min_num(int ar[],int n){
    int min=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    cout<<min<<endl;
}
int main() {
    int ar[]={12,45,-3,67,14};
    int n=sizeof(ar)/sizeof(ar[0]);
    // Max_num(arr,size);
    Min_num(ar,n);
    
}