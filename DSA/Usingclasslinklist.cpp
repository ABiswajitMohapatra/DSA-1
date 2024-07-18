#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};
int main(){
    Node * head=new Node;
    head->data=10;
    head->link=NULL;
    Node*cur=new Node;
    cur->data=15;
    cur->link=NULL;
    head->link=cur;
    cur=new Node;
    cur->data=80;
    cur->link=NULL;
    head->link->link=cur;
    while(head){
        cout<<head->data<<endl;
        head=head->link;
    }


}