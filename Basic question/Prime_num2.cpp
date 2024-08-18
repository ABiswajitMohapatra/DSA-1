#include <iostream>
using namespace std;
void print_prime(int size){
    for(int i=2;i<size;i++){
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
            } 
        }
        if(isprime){
            cout<<i<<" ";
        }
    }
}
int main(){
    int size=50;
    print_prime(size);
}