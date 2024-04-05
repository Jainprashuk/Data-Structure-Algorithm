#include <iostream>
#include <stack>
using namespace std;

void FindMiddle(stack<int> st, int totalsize)
{
    if ((totalsize / 2) + 1 == st.size())
    {
        cout << st.top();
        return;
    }

    int temp = st.top();
    st.pop();

    FindMiddle(st, totalsize);

    st.push(temp);
}

void insertAtBootom(stack<int> &st, int data)
{
    if (st.empty())
    {
        /* code */
        st.push(data);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBootom(st, data);

    st.push(temp);
}

void reverseStack(stack<int> &st){
    if (st.empty())
    {
        return;
        /* code */
    }

    int temp = st.top();
    st.pop();

    reverseStack(st);

    insertAtBootom(st,temp);

    
}

void PrintStack(stack<int>st){
    while (!st.empty())
    {
        /* code */
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
}


int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    // FindMiddle(st, st.size());

    // insertAtBootom(st,100);
    cout<<"Before : ";
    PrintStack(st);
    
    reverseStack(st);

    cout<<"after : ";
    PrintStack(st);
    
    
}
