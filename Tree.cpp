#include <iostream>
using namespace std;
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
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    //print root:
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    //print root:
    
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
    cout<<endl;
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    //print root:
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
    cout<<endl;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    preorder(root);
    Inorder(root);
    postorder(root);
    return 0;
}