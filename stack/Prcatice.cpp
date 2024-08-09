#include <iostream>
using namespace std;
#include<stack>
#include<cctype>
bool prefix(string str){
  stack<char>st;
  for(int i=0;i<str.length();i++){
    if(st.empty()){
        st.push(str[i]);
    }else if(st.top()=='('&&str[i]==')'||st.top()=='{'&&str[i]=='}'||st.top()=='['&&str[i]==']'){
        st.top();
    }else{
        st.push(str[i]);
    }
  }
  return st.size()==0;
}


int main() {
    string str="abcd";
    
    return 0;
}
