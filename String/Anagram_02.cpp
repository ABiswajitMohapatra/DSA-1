#include <iostream>
# include<bits/stdc++.h>
using namespace std;
bool Anagram(string s1,string s2){
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<l1;i++){
        if(s1[i]!=s2[i])  return false;
    }
return true;
}
int main() {
    string s1="abba";
    string s2="bbac";
    if(Anagram(s1,s2))  cout<<"Two string are anagram";
    else cout<<"Not anagram";
    return 0;
}