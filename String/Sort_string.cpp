#include <iostream>
using namespace std;  
void dis(string str){
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]>str[j]){
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    }
    cout<<str<<endl;
}
int main() {
    string str="dcsfjdbcbwaAFGYG";
    dis(str); 
    return 0;
}


