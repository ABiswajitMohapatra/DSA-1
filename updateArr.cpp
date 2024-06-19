#include <iostream>
using namespace std;
void UpdateArr(int A[],int size){
    cout<<"Entering update function:"<<endl;
    A[0]=10;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"Exiting update function"<<endl;
}
int main() {
    int A[]={1,2,3};
    UpdateArr(A,3);
    return 0;
}