#include <iostream>
using namespace std;
#include <queue>
class Node{
    public:
 int data;
 Node* left;
 Node* right;
 Node(int val){
    data=val;
    left=NULL;
    right=NULL;
 }
};
void Level_order_traversing(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    int level=q.size();
    while(!q.empty()){
    for(int i=0;i<level;i++){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    cout<<" ";
}
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(23);
    root-> right=new Node(12);
    root->right->left = new Node(66);
    root->right->right=new Node(7);
    root->left->left=new Node(22);
    root->left->right=new Node(21);
    cout<<"level order:";
    Level_order_traversing(root);
    return 0;
}