#include <iostream>
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

int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1; // This should ideally not happen in correct usage
}

Node* BuildTree(int preorder[], int inorder[], int start, int end) {
    static int i = 0;  // Static variable to track index in preorder array

    if (start > end) {
        return nullptr;  // Base case for recursion
    }

    int curr = preorder[i++];  // Take current element from preorder
    Node* node = new Node(curr);  // Create new node

    if (start == end) {
        return node;  // Leaf node case
    }

    // Find index of current element in inorder array
    int pos = search(inorder, start, end, curr);

    // Recursive calls to build left and right subtrees
    node->left = BuildTree(preorder, inorder, start, pos - 1);
    node->right = BuildTree(preorder, inorder, pos + 1, end);

    return node;  // Return the constructed node
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
