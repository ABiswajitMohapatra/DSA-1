#include <iostream>
using namespace std;
int print(string str,string key){
    if(str.length()<key.length()){
        return -1;
    }
    for(int i=0;i<=str.length()-key.length();i++){
        if(str.substr(i,key.length())==key){
            return i;
        }
    }
    return -1;
}
int main() {
    string str="hellogandu";
    string key="hello";
    cout<<print(str,key);
    return 0;
}
//28. Find the Index of the First Occurrence in a String?
