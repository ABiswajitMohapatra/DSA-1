#include <iostream>
using namespace std;
void Unique(int A[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(A[i]==A[j]){
                count++;
            }
        }
        if(count==1){
            cout<<A[i]<<",";
        }
    }
}
void All_Unique(int A[],int size){
    for(int i=0;i<size;i++){
        bool isunique=false;
        for(int j=0;j<i;j++){
            if(A[i]==A[j]){
                isunique=true;
                
            }
        }
        if(!isunique){
            cout<<A[i]<<",";
        }
    }
}
void count_value(int A[],int size){
    for(int i=0;i<size;i++){
        if(A[i]!=-1){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }
            cout<<"Element "<<A[i]<<"="<<count<<endl;;
        }
    }
}
int main(){
int A[]={23,45,67,45,23,23,90,12,22,22,22,12,91};
int size=sizeof(A)/sizeof(A[0]);
Unique(A,size);
cout<<endl;
All_Unique(A,size);
cout<<endl;
count_value(A,size);
}