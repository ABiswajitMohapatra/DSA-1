#include <iostream>
using namespace std;
int Unique(string str){
    for(int i=0;i<str.length();i++){
        bool found=true;
        for(int j=0;j<str.length();j++){
            if(i!=j && str[i]==str[j]){
                found=false;
                break;
            }
        }
        if(found){
            return i;
        }
    }
    return -1;
}

int main() {
    string str="abcdab";
    cout<<Unique(str);
    return 0;
}