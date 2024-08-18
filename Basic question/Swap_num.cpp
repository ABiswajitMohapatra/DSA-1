#include <iostream>
using namespace std;

/*
void swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2;
}
int main() {
    int num1=12;
    int num2=24;
    swap(num1,num2);
    return 0;
}
*/


//Without third variable:
void swap(int num1,int num2){
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<num1<<" "<<num2;
}
int main(){
int num1=134;
int num2=90;
swap(num1,num2);
}