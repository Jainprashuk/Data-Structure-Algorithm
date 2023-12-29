#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }

    int topelement = st.top();
    st.pop();

    InsertAtBottom(st, target);

    st.push(topelement);
}

void Reverse(stack<int> &s)
{

    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    Reverse(s);

    InsertAtBottom(s, target);
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    Reverse(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}