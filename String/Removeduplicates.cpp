#include <iostream>
using namespace std;
# include<bits/stdc++.h>
void remove_duplicates(string str){
map<char,int>mp;
for(auto x:str){
    mp[x]++;
}
for(auto x:str){
   // cout<<y.first<<"="<<y.second<<endl;
   //if(x.second==1)  cout<<x.first;
   if(mp[x]==1) cout<<x;
}
}
int main() {
    string str="aabbssnncqwdwc";
    remove_duplicates( str);
    return 0;
}