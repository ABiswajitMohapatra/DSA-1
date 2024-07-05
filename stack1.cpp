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
    if(top=size-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
          top++;
          arr[top]=val;
   }
  void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    top--;
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
    stack st;
    st.push(10);
    st.push(2);


}