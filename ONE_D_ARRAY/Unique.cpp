#include <iostream>
using namespace std;
void UniqueElement(int A[],int size){
    
    for(int i=0;i<size;i++){
      bool isunique=false;
        for(int j=0;j<i;j++){
            if(A[i]==A[j]){
                isunique=true;

                break;
            }
        }
         if(!isunique){
        cout<<A[i]<<" "<<endl;;
        
    }
    }
    
}
void Occuarance (int A[], int size) {
    for (int i = 0; i < size; i++) {
        if (A[i] != -1) {  // Check if A[i] is not marked as visited
            int count = 1;  // Initialize count for the current element
            for (int j = i + 1; j < size; j++) {
                if (A[i] == A[j]) {
                    count++;  // Increment count for occurrences
                    A[j] = -1;  // Mark A[j] as visited by setting it to -1
                }
            }
            cout << "Element " << A[i] << " occurs " << count << " times" << endl;
        }
    }
}

int main() {
    int A[]={2,3,4,2,3,4,2,5,2,3,4,1};
    int size=sizeof(A)/sizeof(A[0]);
    UniqueElement(A,size);
    Occuarance (A,size);
    return 0;
}