#include <iostream>
using namespace std;
bool isvalid (char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')){
         return true;
    }
    return false;
}
char toLowercase(char ch){
       if(ch>='a' && ch<='z')  return ch;

       else
         {char temp =ch-'A'+'a';
       return temp;
         }
}

int main() {
   
}