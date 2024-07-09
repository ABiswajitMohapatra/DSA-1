#include <iostream>
using namespace std;
class stack{
   public:
   int *arr;
   int top;
   int size;
   stack(int size){
    arr=new int[size];
    top=-1;
   }
   void push(int val){
    if(size-top>1){
          top++;
          arr[top]=val;
   }else{
    cout<<"Stack overflow"<<endl;  
   }
   }
  void pop(){
    if(top>=0){
      top--;
    }else{
       cout<<"stack underflow"<<endl;
    }
  }
  int peek(){
    if(top>=0) {
        return arr[top];
    }
    else  {
        cout<<"stack is empty"<<endl;
        return -1;
    }
  }
};
int main() {
    stack st(6);
    st.push(10);
    st.push(2);
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;




}