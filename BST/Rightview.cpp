#include <iostream>
using namespace std;
#include<queue>
class Node{
    public:
Node* left;
Node* right;
int data;
Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void right_view(Node* root){
    cout<<"Right view"<<" ";
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* temp=q.front();
            q.pop();
            if(i==n-1){
               cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
    cout<<endl;
}


int main() {
    Node* root=new Node(1);
    root->left=new Node(4);
     root->right=new Node(7);
      root->left->right=new Node(41);
       root->left->left=new Node(410);
        root->right->left=new Node(104);
        right_view(root);
    return 0;
}