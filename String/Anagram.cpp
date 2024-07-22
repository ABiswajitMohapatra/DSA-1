#include <iostream>
using namespace std;
bool Rotation(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    string temp=s1+s2;
    return (temp.find(s2)!= string::npos);
}
int main() {
    string s1="biswa";
    string s2="isabb";
    if(Rotation(s1,s2)){
        cout<<"Anagram";
    }else  cout<<"not";
    return 0;
}