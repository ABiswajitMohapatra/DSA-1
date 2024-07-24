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
int sumof_nodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumof_nodes(root->left)+sumof_nodes(root->right)+root->data;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(23);
    root->left->left=new Node(22);
    root->left->right=new Node(21);
    cout<<"sum of nodes:"<<sumof_nodes(root);
    return 0;
}