#include <iostream>
using namespace std;
class Node{
    public:
int data;
Node* left;
Node* right;
Node(int vl){
    data=vl;
    left=NULL;
    right=NULL;
}
};
int replace_root(Node * root){
    if(root==NULL){
        return 0;
    }
    int sum=root->data;
    replace_root(root->left);
    replace_root(root->right);
    if(root->left!=NULL){
        return root->data+=root->left->data;
    }
    if(root->right!=NULL){
        return root->data+=root->right->data;
    }
    sum=root->data;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(23);
    root-> right=new Node(12);
    root->left->left=new Node(22);
    root->left->right=new Node(21);
    root->right->left = new Node(66);
    root->right->right=new Node(7);
    cout<<"Replace with sum:"<<replace_root(root);
    return 0;
}