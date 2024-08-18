#include <iostream>
using namespace std;
int GCD_(int num1,int num2){
    while(num1!=num2){
        if(num1>num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    return num2;
}
int main() {
    cout<<GCD_(40,10);
    return 0;
}