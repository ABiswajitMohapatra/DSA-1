#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void removespecial(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]<'A' || s[i]>'Z' &&s[i]<'a' || s[i]>'z' ){
            s.erase(i,1);
            i--;
        }
    }
    cout<<s;
}
int main() {
    string s="nednn34.=][432j@@@##mkcm";
    removespecial(s);
    return 0;
}