#include <iostream>
using namespace std;
bool  Palindrome(int num){
    int rev=0;
    int temp=num;
    while(num!=0){
        int dig=num%10;
        rev=(rev*10)+dig;
        num=num/10;
    }
    if(temp==rev){
        return true;
    }else{
        return false;
    }
}
int main() {
    int num=12321;
    cout<<Palindrome(num);
    return 0;
}