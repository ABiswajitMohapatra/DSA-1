#include<iostream>
using namespace std;
struct Node{
    Node* prev;
    int data;
    Node* next;
};
Node* traversing(Node*head){
    Node*ptr=head;
    while(ptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){

}