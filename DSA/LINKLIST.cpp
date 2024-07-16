#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *link;
};
int main()
{
    // creating first node:

    Node *head = new Node;
    head->data = 90;
    head->link = NULL;
    cout << head->data << endl;
    //   cout<<head->link<<endl;

    // creating second node:

    Node *current = new Node;
    current->data = 70;
    current->link = NULL;
    head->link = current;
    cout << current->data << endl;

    // creating third node:

    Node *current2 = new Node;
    current2->data = 60;
    current2->link = NULL;
    current->link = current2;
    cout << current2->data << endl;

}
