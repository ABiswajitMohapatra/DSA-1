#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Insert at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        // If the list is empty
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Update the previous pointer of the head node
        head->prev = newNode;

        // Update the next pointer of the new node
        newNode->next = head;

        // Update the head of the list
        head = newNode;
    }

    // Print the list
    void printList() {
        Node* temp = head;
        while (temp!= NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtBeginning(30);

    dll.printList();

    return 0;
}
