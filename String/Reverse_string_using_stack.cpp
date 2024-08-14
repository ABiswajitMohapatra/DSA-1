#include <iostream>
using namespace std;
#include<stack>
void reverse(string str){
    stack<char>st;
    for(char ch: str){
        st.push(ch);
    }
    for(int i=0;i<str.length();i++){
        str[i]=st.top();
        st.pop();
    }
    cout<<str;
}
int main() {
    string str="biswa";
    reverse(str);
    return 0;
}