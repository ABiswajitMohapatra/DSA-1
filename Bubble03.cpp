#include <iostream>
using namespace std;
void Check_Bubble(int A[],int size){
    for(int i=size-1;i>0;i--){
        int hasSort=0;
        for(int j=0;j<i;j++){
            
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                     hasSort=1;
                     
            }
        }
        if(hasSort==0)    break;
    } 
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    }
int main(){
    cout<<"Enter size:";
    int size;
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
Check_Bubble(A,size);
}