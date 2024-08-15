#include <iostream>
using namespace std;
void Find_common(int array1[],int array2[],int array3[],int s1,int s2,int s3){
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            for(int k=0;k<s3;k++){
                if(array1[i]==array2[j]==array3[k]){
                    cout<< array1[i]<<" ";
                }
            }
        }
    }
}
int main() {
    int array1[] = {1, 5, 7, 8, 9, 11}; 
    int array2[] = {6, 8, 10, 11, 12, 16}; 
    int array3[] = {1, 3, 5, 6, 8, 10, 11, 17}; 
    int s1 = sizeof(array1) / sizeof(array1[0]); 
    int s2 = sizeof(array2) / sizeof(array2[0]); 
    int s3 = sizeof(array3) / sizeof(array3[0]); 
    Find_common(array1,array2,array3,s1,s2,s3);
    return 0;
}