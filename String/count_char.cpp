
#include <bits/stdc++.h>
using namespace std;
void count_char(string str){
    map<char,int>mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    for(auto x:mp){
        cout<<x.first <<" "<<x.second<<endl;
    }
}
int main() {
    string str="whnuebwcwevcwaa";
    count_char(str);
    return 0;
}