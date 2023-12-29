#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st , int target){
    if(st.empty()){
        st.push(target);
        return;
    }

    int topelement = st.top();
    st.pop();

    solve(st,target);

    st.push(topelement);

}

void InsertAtBottom(stack<int> &st)
{

    if (st.empty())
    {
        cout << "stack is empty ;";
        return;
    }

    int target = st.top();
    st.pop();
    solve(st,target);
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    InsertAtBottom(st);

    solve(st,11);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    
}