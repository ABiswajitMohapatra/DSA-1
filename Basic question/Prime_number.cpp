#include <iostream>
using namespace std;
bool prime_num(int num){
    if(num<=1) cout<<"Not a prime number";
    bool isprime=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
          isprime=false;
        }
    }
    if(isprime){
        cout<<"prime number...";
    }else{
        cout<<"Number is not prime";
    }
}
int main() {
    int num=27;
    prime_num(num);
    return 0;
}