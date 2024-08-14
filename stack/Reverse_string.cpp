#include <iostream>
using namespace std;
#include<stack>
void Rev(string str){
    stack<char>s;
    for(char ch:str){
        s.push(ch);
    }
    for(int i=0;i<str.length();i++){
        str[i]=s.top();
        s.pop();
    }
    cout<<str;
}
int main() {
    string str="Biswa sex";
    Rev(str);
    return 0;
}