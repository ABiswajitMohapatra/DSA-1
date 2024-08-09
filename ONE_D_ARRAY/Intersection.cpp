#include <iostream>
using namespace std;
int main() {
 // FIND THE INTERSECTION :  

    // int A1[]={1,3,4,54,10,5,13,14,15};
    // int A2[]={2,3,13,14,7,10,8,9};
    // int length1=sizeof(A1)/sizeof(A1[0]);
    // int length2=sizeof(A1)/sizeof(A2[0]);
    // for(int i=0;i<length1;i++){
    //     for(int j=0;j<length2;j++){
    //         if(A1[i]==A2[j]){
    //            cout<<A1[i]<<endl;
    //         }
    //     }
    // }

//FIND THE DUPLICATED VALUE IN THE ARRAY:
/*
    int A[]={1,23,4,5,11,12,13,14,1,23};
    int len=sizeof(A)/sizeof(A[0]);
    bool isdup=true;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(A[i]==A[j]){
                isdup=false;
                cout<<A[i]<<endl;
                break;
            }
        }
    }
    if(!isdup){
        cout<<"dup"<<endl;
    }else{
        cout<<"no"<<endl;
        }
*/


   

//Pair sum
/*
int A[]={1,2,3,4,5,6,7,8};
int key=80;
 bool ishai=true;
for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if(A[i]+A[j]==key){
            cout<<A[i]<<" "<<A[j]<<endl;
            ishai=false;
            break;
        }
    }
}
if(!ishai){
    cout<<"hai "<<endl;
}else{
    cout<<"nehi hai"<<endl;
}

//Triple number:
int B[]={1,4,6,7,9,8,5,2,9,3};
int chabi=12;
bool isdone=true;
for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
        for(int k=j+1;k<9;k++){
            if(B[i]+B[j]+B[k]==chabi){
                cout<<B[i]<<" "<<B[j]<<" "<<B[k]<<endl;
                isdone=false;
                break;
            }
        }
    }
}
if(!isdone){
    cout<<"hai "<<endl;
}else{
    cout<<"nehi hai"<<endl;
}
*/
 }
