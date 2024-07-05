#include <iostream>
using namespace std;
class Mystack{
   public:
   int *arr;
   int top;
   int size;
   Mystack(int size){
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
    Mystack st(4);
    st.push(10);

}