#include <iostream>
using namespace std;
int Factorial(int num){
    if(num==0 ||num ==1){
        return 1;
    }
    for(int i=2;i<=num;i++){
        return num*Factorial(num-1);
    }
}
int main() {
    int num=7;
    cout<<Factorial(num);
    return 0;
}