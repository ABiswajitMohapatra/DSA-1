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
int Max_height(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(Max_height(root->left),Max_height(root->right))+1;
}
int main() {
     Node* root=new Node(1);
    root->left=new Node(23);
    root->left->left=new Node(22);
    root->left->right=new Node(21);
    cout<<"No of height:"<<Max_height(root);
    return 0;
}