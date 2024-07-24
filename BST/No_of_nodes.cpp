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
int count_nodes(Node* root){
    if(root==NULL){
        return 0;
    }
return count_nodes(root->left)+count_nodes(root->right)+1;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(23);
    root->left->left=new Node(22);
    //root->left->right=new Node(21);
    cout<<"No of nodes:"<<count_nodes(root);
    return 0;
}