#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
int data;
Node* left;
Node* right;
Node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
};
int checkheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=checkheight(root->left);
    if(leftheight==-1){
        return -1;
    }
    int rightheight=checkheight(root->right);
    if(rightheight==-1){
        return -1;
    }
    if(abs(leftheight-rightheight)==-1){
        return -1;
    }
    return max(leftheight,rightheight)+1;
}
bool isbalance(Node* root){
    return checkheight(root)!= -1;
}
int main(){
Node * root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(3);
    root->left->left->left = new Node(4);
    root->left->left->right = new Node(4);
    if(isbalance(root)){
        cout<<"The tree is balanced"<<endl;
    }else{
        cout<<"The tree is not balanced."<<endl;
    }
}