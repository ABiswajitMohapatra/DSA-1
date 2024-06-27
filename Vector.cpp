#include <iostream>
#include <vector>
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
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=V[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}