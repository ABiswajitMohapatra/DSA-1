#include <iostream>
#include <unordered_map>
using namespace std;

void remove_duplicates(string str) {
    unordered_map<char, int> mp;
    for (char x : str) {
        mp[x]++;
    }
    for (char x : str) {
        if (mp[x] == 1) {
            cout << x;
        }
    }
}
