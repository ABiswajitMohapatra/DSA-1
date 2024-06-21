#include <iostream>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int>unset={4,2,6,1,3,9};
     unset.insert(20);
    unset.erase(4);//delete value only
    //unset.clear();//delete all elements
    for(int x:unset){
        cout<<x<<" ";
    }
    
}