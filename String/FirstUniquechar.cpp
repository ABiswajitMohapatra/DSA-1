#include <iostream>
using namespace std;
void Unique(string str){
    for(int i=0;i<str.length();i++){
        bool found=false;
        for(int j=0;j<str.length();j++){
            if(i!=j && str[i]==str[j]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"The first unique char:"<< str[i];
            return;
        }
    }
    cout<<"No unique char found";
}

int main() {
    string str="abcdcdab";
    Unique(str);
    return 0;
}