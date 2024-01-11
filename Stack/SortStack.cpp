#include<iostream>
#include<stack>
using namespace std;

void InsertInSortedStack(stack<int> &s, int data){

    if (s.empty())
    {
        s.push(data);
        return;
    }

    if (s.top()<=data)
    {
        /* code */
        s.push(data);
        return;
    }

    int topelement = s.top();
    s.pop();

    InsertInSortedStack(s,data);

    s.push(topelement);
    
    
}

void sortStack(stack<int> &s){
    if (s.empty())
    {
        /* code */
        return;
    }

    int topElement = s.top();
    s.pop();

    sortStack(s);

    InsertInSortedStack(s,topElement);
    
}

void PrintStack(stack <int> s){
    while (!s.empty())
    {
        /* code */
        cout<<s.top()<<" ";
        s.pop();
    }
    
}


int main(){

    stack<int> s;
    s.push(1);
    s.push(33);
    s.push(3);
    s.push(43);
    s.push(5);

    PrintStack(s);
    cout<< endl;

    // InsertInSortedStack(s,3);

    

    sortStack(s);

    PrintStack(s);
    cout<< endl;



}
