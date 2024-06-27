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
bool checkpalindrome(char arr[],int size){
}
int main() {
   char arr[] ="A& kghbnmani, a pla@n, a canal, Panama!";
    int size = sizeof(arr) / sizeof(arr[0]) - 1; 
    if(checkpalindrome(arr, size)){
        cout << "The string is a palindrome." << endl;
    }else{
        cout << "The string is not a palindrome." << endl;
    }
   
}