#include <iostream>
//#include <queue>
using namespace std;
class Queue{
public:
int *arr;
int front;
int rear;
int size;

Queue(int size){
    arr=new int[size];
    front=-1;
    rear=-1;
}
void push(int val){
    if(rear==size-1){
        cout<<"Queue is overflow"<<endl;
        return;
    }
    rear++;
    arr[rear]=val;
    if(front==-1){
        front++;
    }
}
void pop(){
    if(front==-1 || front>rear){
        cout<<"No elements in queue"<<endl;
        return;
    }
    front++;
}
 void display(){
        if(front == -1){
            cout<<"No elements in queue"<<endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main() {
    Queue qt(5); // specify the size of the queue
    qt.push(12);
    qt.push(13);
    qt.push(15);
    qt.push(16);
    qt.pop();
    qt.display();
    return 0;

}