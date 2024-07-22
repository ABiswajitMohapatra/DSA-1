#include <iostream>
using namespace std;
string reverse(string str){
    int start=0;
    int end=str.size()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
return str;
}
int main() {
    string str;
    cout<<"Enter your string:";
    cin>>str;
    cout<<reverse(str);
    return 0;
}