#include <iostream>
using namespace std;

int main() {
    string str="hello world how are you";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.replace(i,1,"#9");
        }
    }
    
    cout<<str<<endl;
}