#include <iostream>
using namespace std;
#include<bits/stdc++.h>
string Reverse_v(string str){
 int left=0;
 int right=str.length()-1;
 string vowel="aeiouAEIOU";
 while(left<right){
 while(left<right && vowel.find(str[left])==string::npos){
    left++;
 }
 while(left<right && vowel.find(str[right])==string::npos){
    right--;
 }
 swap(str[left],str[right]);
 left++;
 right--;
 }
 return str;
}
int main() {
    string str="biswa";
    cout<<Reverse_v(str);
    return 0;
}
