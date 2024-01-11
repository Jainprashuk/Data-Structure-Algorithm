#include<iostream>
#include<stack>
using namespace std;

void InsertInSortedStack(stack<int> &s , int target){
     if(s.empty()) {
                s.push(target);
                return;
        }
        if(s.top() <= target) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        InsertInSortedStack(s, target);

        //BT
        s.push(topElement);
    
}


int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    InsertInSortedStack(s,3);

     while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    
}