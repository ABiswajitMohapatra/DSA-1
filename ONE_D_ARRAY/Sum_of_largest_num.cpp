#include <iostream>
using namespace std;
#include <algorithm>
bool Check(int A[],int size){
    sort(A,A+size);
    int sum=0;
    for(int i=0;i<size-1;i++ ){
            sum=sum+A[i];
        }
    if(sum==A[size-1]){
        return true;
    }else{
        return false;
    }
    }
int main() {
    int A[]={1, 1, 1, 1, 1, 0, 5};

    int size=sizeof(A)/sizeof(A[0]);
    cout<<boolalpha<<Check(A,size);
    return 0;
}
// Arrange the numbers of a given array in a way that the sum of some numbers equal the largest number in the array?