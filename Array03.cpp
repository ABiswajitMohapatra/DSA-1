#include <iostream>
using namespace std;
int main() {


//Linear search:
int A[]={13,24,45,89,90};
int key=89;
int found=-1;
for(int i=0;i<5;i++){
    if(key==A[i]){
       found=i;
        break;
    }
}
if(found!=-1){
    cout<<"Element found at index:"<<found<<endl;
}else{
    cout<<" Element not found "<<endl;
}

}