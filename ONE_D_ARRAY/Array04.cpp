#include <iostream>
using namespace std;

int main() {
    //Unique elements:
    int k[]={1,1,1,2,2,3,3,4,4,5,6,3,2,2,11};
    int len=sizeof(k)/sizeof(k[0]);
    int i=0;
    int count=0;
    for(int j=i+1;j<len;j++){
            if(k[i]!=k[j]){
                i++;
                k[i]=k[j]; 
                count++;   
            }
        }
        for(int i=0;i<count;i++){
            cout<<k[i]<<" ";
        }
    }
