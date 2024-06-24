//STRING:
#include <iostream>
using namespace std;
int main() {
    string str="This is a Dog ,but i can't find pussy anywhere";
   for(int i=0;i<str.length();i++)
{
  if(i%2==0){
    cout<<str[]<<" ";
  }
}
}
