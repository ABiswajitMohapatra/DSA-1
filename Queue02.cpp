#include <iostream>
#include<stack>
using namespace std;
void reverseString(string s){
    stack<string>st;
   for(int i=0;i<s.length();i++){
    string word="";
    while(s[i]!=' '&& i<s.length()){
        word+=s[i];
        i++;
    }
    st.push(word);
    
    }
    while(!s.empty()){
        cout<<st.top()<<" ";
        st.pop();
   }
}
int main() {
    reverseString("Aman is a good person");
    return 0;
}