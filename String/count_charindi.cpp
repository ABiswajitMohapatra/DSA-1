#include <iostream>
using namespace std;
int count(string s){
    char ch='a';
    int res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==ch){
        res++;
        }
    }
   return res;
}
int main() {
    string s="jjsjxnanjanaa";
    cout<<count(s);
    return 0;
}