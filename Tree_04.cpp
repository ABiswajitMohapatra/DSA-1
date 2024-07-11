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
int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1; 
}

Node* BuildTree(int preorder[], int inorder[], int start, int end) {
    static int i = 0;  
    if (start > end) {
        return nullptr;  
    }
    int curr = preorder[i++];  
    Node* node = new Node(curr);  
    if (start == end) {
        return node;  
    }
    int pos = search(inorder, start, end, curr);
    node->left = BuildTree(preorder, inorder, start, pos - 1);
    node->right = BuildTree(preorder, inorder, pos + 1, end);
    return node;  
}
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    int preorder[] = {1, 2, 4, 5, 3};
    int inorder[] = {4, 2, 5, 1, 3};
    int n = sizeof(preorder) / sizeof(preorder[0]);

    Node* root = BuildTree(preorder, inorder, 0, n - 1);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
