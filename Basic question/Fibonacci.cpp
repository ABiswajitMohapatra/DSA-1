#include <iostream>
using namespace std;
void  printFibonacciSeries(int size){
    if(size<=0) return ;
    int num1=0,num2=1;
    cout<<num1;
    if(size>1){
        cout<<" ,"<<num2;
    }
    for(int i=2;i<size;i++){
        int newTerm=num1+num2;
        cout<<" ,"<<newTerm;
        num1=num2;
        num2=newTerm;
    }
    cout<<endl;
}
int main() {
    int size = 15;
    printFibonacciSeries(size);
    return 0;
}
