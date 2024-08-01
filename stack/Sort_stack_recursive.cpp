#include <iostream>
using namespace std;
#include<stack>
void insertsorted(stack<int>& st,int key){
    if(st.empty()||key>st.top()){
        st.push(key);
        return;
    }
    int top=st.top();
    st.pop();
    insertsorted(st,key);
    st.push(top);
}
void sortstack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    sortstack(st);
    insertsorted(st,top);
    
}
void printstack(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main() {
    stack<int>st;
    st.push(-12);
    st.push(-2);
    st.push(232);
    st.push(78);
    st.push(42);
    st.push(-91);
    cout<<"Before stack:";
    printstack(st);
    sortstack(st);
    cout<<"After sorted stack:";
    printstack(st);
    return 0;
}
