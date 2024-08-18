#include <iostream>
using namespace std;
void Even_odd(int num){
    if((num & 1)==0)  cout<<"Even";
    else              cout<<"odd";
}
int main() {
    int num=56;
    Even_odd(num);
    return 0;
}