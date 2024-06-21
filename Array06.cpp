#include <iostream>
using namespace std;
string pairsum(vector<int>vec,int size,int target){
    sort(vec.begin(),vec.end());
    int i=0;
    int j=size-1;
    while(i<=j){
        int sum;
        sum=vec[i]+vec[j];
        if(sum==target) return "yes";
        else if (sum<target) i++;
        else j--;
    }
    return "No";
}
int main() {
    
    return 0;
}