#include <iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
Node (int val){
 data=val;
 next=NULL;
}
};
void insertHead(Node* &head,int val){
    Node * n=new Node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    Node *temp=head;
    while(temp->next !=head){
          temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insert_at_tail(Node*&head,int data){
    Node*ptr = new Node(data);
    if(head == NULL){
        ptr->next = ptr;
        head = ptr;
        return;
    }
    Node*temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    ptr->next = head;
    temp->next = ptr;
}
void display(Node* &head){
Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
        if(temp==head){
            break;
        }
    }
    cout << endl;
}
int main() {
    Node* head = NULL;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 30);
    display(head);
    
insert_at_tail(head,0);
display(head);
return 0;
}