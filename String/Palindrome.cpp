#include <iostream>
using namespace std;
bool palindrome(string str){
    int start=0;
    int end=str.size()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
  return true;
}
int main() {
    string str="abisiba";
    if(palindrome(str))  cout<<"plaindrome";
    else    cout<<"not plindrome";
    return 0;
}
