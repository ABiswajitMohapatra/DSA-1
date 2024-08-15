#include <iostream>
using namespace std;
void Permutation(string str,int left,int right){
   if(left==right){
    cout<<str<<" ";
   }
    for(int i=left;i<=right;i++){
        swap(str[left],str[i]);
        Permutation(str,left+1,right);
        swap(str[left],str[i]);
    }
}
int main() {
    string str="Ab";
    Permutation(str,0,str.length()-1);
    return 0;
}