//Kadan's algorithm:
//#include <climits> // (take max as INT_MIN)
#include <iostream>
using namespace std;
int Max(int A[],int size){
    int max=-1;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=A[i];
        if(sum>max)  max=sum;
        if (sum<0)   sum=0;  
    }
    return max;
}
int main() {
    cout<<"Enter size:";
    int size;
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Max:"<<Max(A,size);
}