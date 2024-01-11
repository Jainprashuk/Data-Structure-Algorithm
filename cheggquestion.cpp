#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    string str = "Hello";

    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        s.push(str[i]);
    }

    while (!s.empty())
    {
        /* code */
        cout<<s.top()<<" ";
        s.pop();
    }
    
}