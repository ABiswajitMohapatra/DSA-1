 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isvalidparenthesis(string str){
    stack<char>temp;
    for(int i=0;i<str.length();i++){
    if(temp.empty()){
      temp.push(str[i]);
    }
    else if((temp.top()=='(' && str[i]==')')||
      (temp.top()=='['&& str[i]==']')||
      (temp.top()=='{'&& str[i]=='}')){
        temp.pop();
      }else{
        temp.push(str[i]);
      }
}
return temp.size()==0;
}
int main() {
    string str="({[]]})";
   if(isvalidparenthesis( str)) cout<<"This is valid paranthesis"<<endl;
   else cout<<"not"<<endl;
    return 0;
}