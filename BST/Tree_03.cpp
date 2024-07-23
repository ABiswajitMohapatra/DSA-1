#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printlevelOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    // Create a queue and push the root node
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size(); // Get the current level size
        for (int i = 0; i < levelSize; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            // Enqueue left child
            if (temp->left != NULL) {
                q.push(temp->left);
            }
            // Enqueue right child
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
        cout << endl; // Move to the next level
    }
}
int LevelOrderSumAtLevel(Node* root, int k) {
    if (root == nullptr) {
        cout << "Empty tree" << endl;
        return 0;
    }                           
    queue<Node*> q;
    q.push(root);
    int currentLevel = 0;
    while (!q.empty()) {
        int levelSize = q.size();
        int levelSum = 0;

        for (int i = 0; i < levelSize; ++i) {
            Node* current = q.front();
            q.pop();

            if (currentLevel == k) {
                levelSum += current->data;
            }

            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }

        if (currentLevel == k) {
            return levelSum;
        }
        currentLevel++;
    }

    // If the desired level is greater than the height of the tree
    return 0;
}
int countNodes(Node* root){
    if(root ==NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;

}
int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}
int MaxHeight(Node* root){
    if(root==NULL){
        return 0;
    }
         //int leftside=MaxHeight(root->left);
        //int rightside=MaxHeight(root->right);
       // return 1+max(leftside,rightside);//add 1 because of root ,we only calculate the leftside and rightside 

        return max(MaxHeight(root->left),MaxHeight(root->right))+1;
}
int  replaceWithsum(Node* root){
    if(root==NULL){
        return 0;
    }
    replaceWithsum(root->left);
    replaceWithsum(root->right);
    int sum=root->data;
    if(root->left!=NULL){
        return root->data+=root->left->data;
    }
    if(root->right != NULL) {
        return  root->data+=root->right->data;
    }
     root->data=sum;
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(21);
    root->right = new Node(3);
    root->left->left = new Node(42);
    root->left->right = new Node(5);
    root->right->left = new Node(66);
    root->right->right=new Node(7);
    cout << "Level Order Traversal of binary tree:" << endl;
    printlevelOrder(root);
    cout<<"level sum:"<<LevelOrderSumAtLevel(root,2)<<endl;;
    cout<<"Number of nodes:"<<countNodes(root)<<endl;;
    cout<<"sum is:"<<sumNodes(root)<<endl;;
    cout<<"Max height:"<<MaxHeight(root)<<endl;;
    cout<<"Sum replace:"<<replaceWithsum(root);
    return 0;
}
