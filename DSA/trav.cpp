
/*#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};

//TRAVERSING:  

void count_node(Node* head){
    int count =0;
    if(head==NULL){
        cout<<"the linklist is empty"<<endl;
    }
    Node* ptr=new Node;
    ptr=head;
    while(ptr!=NULL){
        cout<<"data is: "<<ptr->data<<endl;
        count++;
        ptr=ptr->link;
    }
    cout<<"the no of nodes is: "<<count<<endl;
}


// INSERTION AT THE BEG:

// Node* insert_beg(Node*head,int data){
//       Node *ptr=new Node;
//       ptr->data=data;
//       ptr->link=head;
//       head=ptr;
//       return head;
// }

// INSERTION AT THE END:

// int insert_end(Node*head,int data){
//     Node* temp1,*temp2;
//     temp1=head;
//     temp2=new Node;
//     temp2->data=data;
//     temp2->link=NULL;
//     while(temp1->link!=NULL){
//         temp1=temp1->link;
//     }
//     temp1->link=temp2;
// }

//DELETE AT THE BEG:


// Node* delete_beg(Node* head){
//     if(head==NULL){
//         cout<<"the linklist is empty"<<endl;
//     }else{
//         // Node* val=head;
//         head=head->link;
//         // delete val;
//     }
//     return head;
// }

//DELETE AT THE END:


void delete_end(Node*head){
    if(head==NULL){
cout<<"thhe link list is empty"<<endl;
    }else{
		Node* temp1=head;
		Node* temp2=head;
		while(temp1->link)
	   {
		temp2=temp1;
		temp1=temp1->link;
	   }
	temp2->link=NULL;
   }
}


int main(){
    Node*head=new Node;
    head->data=89;
    head->link=NULL;
    cout<<head->data<<endl;
    Node*current=new Node;
    current->data=78;
    current->link=NULL;
    head->link=current;
    cout<<current->data<<endl;
    count_node(head);
    // head=insert_beg(head,67);
    // count_node(head);
    // insert_end(head,56);
    // head=delete_beg(head);
    delete_end(head);
    count_node(head);
}
*/
// #include <iostream>
// #include <queue>
// using namespace std;
// struct Task {
//     int priority;
//     string description;
//     Task(int p, string d) : priority(p), description(d) {}
// };
// bool operator<(const Task& t1, const Task& t2) {
//     return t1.priority < t2.priority;
// }
// int main() {
//     priority_queue<Task> pq;
//     pq.push(Task(3, "Task 3"));
//     pq.push(Task(1, "Task 1"));
//     pq.push(Task(2, "Task 2"));
//     while (!pq.empty()) {
//         Task t = pq.top();
//         cout << t.description << endl;
//         pq.pop();
//     }
//     return 0;
// }


