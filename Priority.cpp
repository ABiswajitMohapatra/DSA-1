#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    priority_queue<int>pq;
    pq.push(10);
    pq.push(190);
    pq.push(13);
    pq.push(1);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
         pq.pop();
    }
   
   // cout<<pq.top();

}