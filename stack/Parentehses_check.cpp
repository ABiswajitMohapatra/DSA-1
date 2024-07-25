#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool parentheses(string str){
    stack<char>tem;
    for(int i=0;i<str.length();i++){
        if(tem.empty()){
            tem.push(str[i]);
        }
        else if(tem.top()=='('&& str[i]==')'||
        tem.top()=='{'&& str[i]=='}'||
        tem.top()=='['&& str[i]==']'){
          tem.pop();
        }else{
            tem.push(str[i]);
        }
        }
        return tem.size()==0;
    }

int main() {
    string str="{{(})}}";
    if(parentheses(str)){
        cout<<"Valid parentheses";
    }else{
        cout<<"Not";
    }
    return 0;
}