#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int Evaluate_postfix(string str){
    stack<int>st;
    for(char c:str){
        if(isdigit(c)){
            st.push(c-'0');
        }else{
            int opt1=st.top();st.pop();
            int opt2=st.top();st.pop();
            switch (c){
                case '+':
                st.push(opt1+opt2);
                break;
                 case '-':
                st.push(opt1-opt2);
                break;
                 case '*':
                st.push(opt1*opt2);
                break;
                 case '/':
                st.push(opt1/opt2);
                break;
                default:
                cout<<"invalid input";
               return 0;
            }
        }
    }
    return st.top();
}
int main() {
    string str="138*+";
    cout<<Evaluate_postfix(str);
    return 0;
}