#include <iostream>
using namespace std;
#include<stack>
void insertAtbottom(stack<int>&st,int key){
if(st.empty()){
    st.push(key);
}else{
int top=st.top();
st.pop();
insertAtbottom(st,key);
st.push(top);
}
}
void reverse(stack<int>& st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st,top);
}
void printStack(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main() {
    stack<int>st;
    st.push(23);
    st.push(10);
    st.push(90);
    st.push(26);
    st.push(76);
    cout<<"Stack before reverse:";
    printStack(st);
    reverse(st);
    cout<<"Stack after reverse:";
    printStack(st);

    return 0;
}