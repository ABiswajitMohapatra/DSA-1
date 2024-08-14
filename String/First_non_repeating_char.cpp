#include <iostream>
using namespace std;
void Non_repeat(string str) {
    for (int i = 0; i < str.length(); i++) {
        bool repeat = false;
        for (int j = 0; j < str.length(); j++) {
            if (i != j && str[i] == str[j]) {
                repeat = true;
                break;
            }
        }
        if (!repeat) {
            cout << "First non-repeating character: " << str[i] << endl;
            return;
        }
    }
    cout << "No non-repeating character found." << endl;
}

int main() {
    string str = "geeksforgeeks";
    Non_repeat(str);
    return 0;
}
