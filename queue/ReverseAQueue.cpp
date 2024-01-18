// approach 1 - pop all element from queue and insert in stack , after all element pop all element in stack and insert in queue
// time - o(n) space - o(n)

// approach 2 - Recursion
// time - o(n) space - o(n)

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void ReverseViaStack(queue<int> &q)
{

    stack<int> s;

    while (!q.empty())
    {
        /* code */
        int ele = q.front();
        s.push(ele);
        q.pop();
    }

    while (!s.empty())
    {
        int ele = s.top();
        q.push(ele);
        s.pop();
    }
}

void ReverseViaReccursion(queue<int> &q){
    if (q.empty())
    {
        /* code */
        return;
    }

    int ele = q.front();
    q.pop();

    ReverseViaReccursion(q);

    q.push(ele);


    
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(10);
    q.push(11);
    q.push(13);
    q.push(13);
    q.push(19);

    // while (!q.empty())
    // {
    //     /* code */
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    ReverseViaReccursion(q);

    cout << endl;

    while (!q.empty())
    {
        /* code */
        cout << q.front() << " ";
        q.pop();
    }
}
