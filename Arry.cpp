#include <iostream>
using namespace std;
// pair sum:
int main() {
    int A[]={1,3,4,6,7,8};
    int key=7;
    int s[5];
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(A[i]+A[j]==key){
                cout<<A[i]<<" "<<A[j]<<" ";
                
            }
        }
    }
    return 0;
}