#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void ReverseFirstKElements(queue<int> &q, int k)
{
    stack<int> s;
    
     // Push the first k elements onto the stack
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    // Enqueue the reversed elements back into the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Enqueue the remaining elements back into the queue
    for (int i = 0; i < q.size() - k; ++i) {
        q.push(q.front());
        q.pop();
    }
}

// 1 2 3 4 5 6

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(4);
    // q.push(5);

    ReverseFirstKElements(q, 2);

    while (!q.empty())
    {
        /* code */
        cout << q.front() << " ";
        q.pop();
    }
}
