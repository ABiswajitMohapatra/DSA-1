//SET->UNIQUE ELEMENTS ->No two elements in a set can be equal
//Immutable->we can add or remove elements fromm a set,but we can't modify or change the values of existing elements
// sorted order->Bydefault order is increasing but we have an option to chnage that
#include <iostream>
#include<set>
using namespace std;
int main() {
    //ascending:
    //set<int>set1={3,4,56,78,9,3,4};
    // for(int x:set1){
    //     cout<<x<<" ";
    //descending :
    set<int,greater<int>>set1={3,4,56,78,9,3,4};
    // set1.insert(20);
    // set1.erase(4);//delete value only
    // set1.clear();//delete all elements
    //size (no duplicate)
    cout<<set1.size()<<endl;
    for(int x:set1){
        cout<<x<<" ";
    }
}