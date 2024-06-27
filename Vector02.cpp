#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector <int> V(N);
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    
for(int i=0;i<N;i++){
        cout<<V[i]<<endl;;
    }
    cout<<endl;
    }
    
}