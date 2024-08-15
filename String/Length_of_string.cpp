#include <iostream>
using namespace std;
int Length_of_String(string str){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
int main() {
    string str="Biswa jit mohapatra";
    int Res=Length_of_String(str);
    cout<<"The length of the string is:"<<Res;
    return 0;
}