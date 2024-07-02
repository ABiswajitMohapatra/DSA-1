#include <iostream>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
};
Node* reverse(Node* & head){
     Node* prev=NULL;
     Node* curr=head;
     Node* next;
     while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
     }
     return prev;
     
}
int main() {
    
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = new Node();
    head->next->next->data = 3;
    head->next->next->next = new Node();
    head->next->next->next->data = 4;
    head->next->next->next->next = new Node();
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    // Reverse the linked list
      head=reverse(head);
    // Print the reversed linked list
    Node* temp = head;
    while (temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
return 0;
}