#include <iostream>
using namespace std;
#include<queue>
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
Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(Node* root){
   if(root==NULL){
    return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
int main(){
   Node* root=NULL;
   root=insert(root,4);
   insert(root,5);
   insert(root,6);
   insert(root,7);
   insert(root,9);
   insert(root,10);
   inorder(root);


    return 0;
}