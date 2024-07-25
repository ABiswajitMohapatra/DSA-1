#include <iostream>
using namespace std;
class Node{
public:
int *arr;
int size;
int top;
Node(int size){
    arr=new int[size];
    top=-1;
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }else{
        cout<<"Stack is overflow";
    }
}
void pop(){
    if(top>=0){
        top--;
    }else{
        cout<<"Stack is underflow";
        
    }
}
int peek(){
  if(top==-1){
    return arr[top];
  }else{
    cout<<"Stack is empty";
    return -1;
  }
}
 bool isempty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
 }
};

int main() {
    Node st(6);
    st.push(1);
    st.push(7);
    st.pop();
    cout<<st.peek()<<endl;
    
    return 0;
}