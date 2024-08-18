#include <iostream>
using namespace std;
int count_digit(int num){
    int count=0;
    while(num!=0){
        int dig=num%10;
        num=num/10;
        count++;
    }
    return count;
}
int main() {
    int num=333;
    cout<<count_digit(num);
    return 0;
}