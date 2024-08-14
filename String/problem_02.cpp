//C/C++ Program for Remove characters from the first string which are present in the second string?
#include <iostream>
using namespace std;
void  print(string str1,string str2){
  for(int i=0;i<str1.length();i++){
    bool found=false;
    for(int j=0;j<str2.length();j++){
        if(str1[i]==str2[j]){
         found=true;
         break;
        }
    }
    if(!found){
        cout<<str1[i];
    }
  }
}
int main() {
    string str1="biswajit";
    string str2="bikas";
    print(str1,str2);
    return 0;
}