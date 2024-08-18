#include <iostream>
using namespace std;
bool palindrome(string str){
    string temp="";
    for(char c:str){
        if(isalnum(c)){
            temp+=tolower(c);
        }
    }

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
    string str="A2abisiba2A";
    if(palindrome(str))  cout<<"plaindrome";
    else    cout<<"not plindrome";
    return 0;
}
