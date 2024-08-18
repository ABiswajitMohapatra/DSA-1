#include <iostream>
using namespace std;
int Factorial(int num){
    if(num==0 ||num==1){
        return 1;
    }
    int fac=1;
    for(int i=1;i<=num;i++){
   fac*=i;
    }
    return fac;
}
int main() {
    int num=1;
    cout<<Factorial(num);
    return 0;
}