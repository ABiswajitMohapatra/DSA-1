#include<iostream> 
using namespace std;
#include <stack>
void Reverse(string str)
{
    stack<string> st;
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        while (str[i] != ' ' && i < str.length())
        {
            word += str[i];
            i++;
        }
        st.push(word);
        word = "";
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    
}
int main()
{
    string str = "hello how are you";
    Reverse(str);
    return 0;
}