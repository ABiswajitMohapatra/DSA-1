#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
void count_node(Node*head){
    int count=0;
    if(head==NULL){
        cout<<"empty"<<endl;
    }
    Node* ptr=new Node;
    ptr=head;
    while(ptr){
        cout<<"the data is: "<<ptr->data<<endl;
        count++;
        ptr=ptr->link;
    }
    cout<<"the node  is:"<<count<<endl;
}
    int main(){
        Node *head=new Node;
        head->data=69;
        head->link=NULL;
        cout<<head->data<<endl;


        Node* cur=new Node;
        cur->data=90;
        cur->link=NULL;
        head->link=cur;
        cout<<cur->data<<endl;


        cur=new Node;
        cur->data=23;
        cur->link=NULL;
        head->link->link=cur;
        cout<<cur->data<<endl;


       count_node(head);
}