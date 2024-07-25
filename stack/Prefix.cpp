#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
int evaluate_prefix(string str){
    stack<int>st;
     for(int i=str.length()-1;i>=0;i--){
        char c=str[i];
     
        if(isdigit(c)){
            st.push(c-'0');
        }else{
            int opt1=st.top();st.pop();
            int opt2=st.top();st.pop();
            switch(c){
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
    string str = "+9*26"; 
    int result = evaluate_prefix(str);
    cout << "Evaluation result: " << result << endl;
    return 0;
}
