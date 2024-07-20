#include <iostream>
using namespace std;
void palindrome(string str){
    string temp=str;
    string rev=" ";
    for(int i=0;i<str.length();i++){
        rev=str[i]+rev;
    }
    cout<<rev<<endl;
    if(temp==rev){
        cout<<"The string is a palindrome"<<endl;
    }else{
        cout<<"The string is not a palindrome"<<endl;
    }
}
int main() {
    string str="bisib";
    palindrome(str);
    return 0;
}
