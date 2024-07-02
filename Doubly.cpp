#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;
    Node(int val) {
        prev = NULL;
        data = val;
        next = NULL;
    }
};

void insert(Node*& head, int data) {
    Node* ptr = new Node(data);
    if (head == NULL) {
        head = ptr;
        return;
    }
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void display(Node*& head) {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    display(head);
    return 0;
}

