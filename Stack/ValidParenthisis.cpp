#include <iostream>
#include <stack>
using namespace std;

bool ValidString(string str){
    stack<char> s;
    for(int i = 0 ; i < str.length() ; i++){
        char ch = str[i];
        if(ch == '[' || ch == '(' || ch == '{'){
            s.push(ch);
        }
        else {
            if(s.empty()){
                return false;  // No opening bracket for this closing bracket
            }
            char topchar = s.top();
            if((ch == ')' && topchar == '(') || (ch == ']' && topchar == '[') || (ch == '}' && topchar == '{')){
                s.pop(); // Matching opening and closing brackets found
            }
            else{
                return false; // Mismatch of brackets
            }
        }
    }
    return s.empty(); // Check if there are any remaining opening brackets
}

int main() {
    string str = "()[[]";
    cout << boolalpha << ValidString(str);

    return 0;
}
