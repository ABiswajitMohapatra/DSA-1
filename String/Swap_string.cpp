#include <iostream>
using namespace std;
void swap(string str1,string str2){
    string  temp=str1;
    str1=str2;
    str2=temp;
    cout<<str1<<","<<str2<<endl;
}
int main() {
     string str1="hello";
     string str2="biswa";
     swap(str1,str2);
    return 0;
}
//C++ program to swap two Strings