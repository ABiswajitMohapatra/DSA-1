#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int Display(string str){
    int max=0;
    char maxchar='\0';
    map<char,int>mp;
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        // cout<<x.first<<"-"<<x.second<<endl;
        if(x.second<max) 
        max=x.second;
        maxchar=x.first;
    }
    return maxchar;
}
int main() {
    string str="jdndjbudbeubcx";
    char res=Display(str);
    cout<<res;
    return 0;
}