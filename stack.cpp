#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<int>st;
    st.push(10);
    st.push(23);
    st.push(13);
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    
    
}