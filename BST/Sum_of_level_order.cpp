#include <iostream>
#include<queue>
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
int Sum(Node* root,int k){
    if(root==NULL){
        cout<<"empty";
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    int cur=0;
    while(!q.empty()){
    int size=q.size();
    int levelsum=0;
      for(int i=0;i<size;i++){
        Node* temp=q.front();
        q.pop();
        if(cur==k){
            levelsum+=temp->data;
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    if(cur==k){
        return levelsum;
    }
     cur++;
    }
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(21);
    root->right = new Node(3);
    root->left->left = new Node(42);
    root->left->right = new Node(5);
    root->right->left = new Node(66);
    root->right->right=new Node(7);
    
   cout<<"sum: "<<Sum(root,1);
    return 0;
}