#include <iostream>
using namespace std;
void print(int nums[],int size){
     int zero=0;
     int other=size-1;
     while(zero<other){
       if(nums[zero]!=0){
        zero++;
       }else{
        swap(nums[zero],nums[other]);
        other--;
       }
     }
     for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
     }
}
int main() {
    int nums[]={2,4,0,0,1,0,4};
    int size=sizeof(nums)/sizeof(nums[0]);
    print(nums,size);
    return 0;
}