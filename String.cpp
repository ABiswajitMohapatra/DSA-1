//STRING: collection of character:
//type-class
//c-String->c-style string)
#include <iostream>
using namespace std;
int main() {
   char B[]="hello";
   char A[]={'H','e','l','l','o'};
   
  //  char str[100];
  //  cout<<"Enter your name:";
  //  cin.getline(str,100);
  //  int count=0;
  //  while(str[count]!='\0'){
  //   count++;
  //  }
  //  cout<<count;

   string str1="Hello,How are you?";
   cout<<str1<<endl;;
   cout<<str1.find("How")<<endl;
   cout<<str1.size()<<endl;
   cout<<str1.append("bhadwa")<<endl;


string str="raghav";
str.push_back('m');
// it will add at the end of the string;
cout<<str<<endl;
str.pop_back();
//it will remove from the end of the string
cout<<str<<endl;
str.append("mohapatra");
//it will add a word at the last of the string
cout<<str<<endl;

cout<<str.length()<<endl;
// str.clear();
// //it will clear or empty the whole string;
// cout<<str.length()<<endl;


// string s="biswajit  mohapatra kalua";
// s.insert(9,"gandu");
// cout<<s<<endl;


// string s="abcba";
// string rev="";
// for(int i=0;i<s.length();i++){
//   rev=s[i]+rev;
// }
// cout<<rev<<endl;
// if(rev==s){
//   cout<<"palindrome";
// }else{
//   cout<<"no"<<endl;
// }

string v="biswa jhdj bdjwfbj";
int start=0;
int end=v.size()-1;
while(start<end){
  swap(v[start],v[end]);
  start++;
  end--;
}
cout<<v<<endl;
}
