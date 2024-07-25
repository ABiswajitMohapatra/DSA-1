#include <iostream>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
data=val;
left=NULL;
right=NULL;
    }
};
bool isCompleteBinaryTree(Node*root){
    if(root==NULL){
        return true;
    }
    queue<Node*>q;
    q.push(root);
    bool found=false;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left){
            if(found){
                return false;
            }
            q.push(temp->left);
        }else{
            found= true;
        }if(temp->right){
            if(found){
                return false;
            }
            q.push(temp->right);
        }else{
            found=true;
        }
    }
    return true;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    if (isCompleteBinaryTree(root)) {
        cout << "The tree is a complete binary tree.\n";
    } else {
        cout << "The tree is not a complete binary tree.\n";
    }
Node* root1 = new Node(1);
root1->left = new Node(2);
root1->right = new Node(3);
root1->left->left = new Node(4);
root1->left->right = new Node(5);
root1->right->left = new Node(6);
root1->right->right = new Node(7);
root1->left->left->left = new Node(8); 
root1->left->right->left = new Node(9); 
root1->right->left->left = new Node(10);
root1->right->right->right = new Node(11);
 if (isCompleteBinaryTree(root1)) {
        cout << "The tree is a complete binary tree.\n";
    } else {
        cout << "The tree is not a complete binary tree.\n";
    }
    return 0;
}