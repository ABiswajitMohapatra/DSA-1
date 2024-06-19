#include <iostream>
using namespace std;
void printArr(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}
int main() {
  int D[]={10,24,30,40,50};
  int size = sizeof(D)/sizeof(D[0]);
  printArr(D,size);

//max:

}