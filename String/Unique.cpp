#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void unique_(string s){
  map<char,int>mp;
  for(auto x:s){
    mp[x]++;
  }
  for(auto x:mp){ 
   if(x.second==1) cout<<x.first;
  }
}
int main() {
    string s="andhbbhjeakk";
    unique_(s);
    return 0;
}