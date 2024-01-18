// 1 = move first half into new queue
// 2 = dono se ek ek elemrnt nikal ke first wale me add kete jao
// time complexity - o(n )
// space - o(n)
#include <iostream>
#include <queue>
using namespace std;
void InterleaveFirstAnsdSecondHalf(queue<int> &q)
{
    queue<int> q2;
    int size = q.size();
    while (q2.size() < size / 2)
    {
        int ele = q.front();
        q.pop();
        q2.push(ele);
    }
    while (!q.empty() && ! q2.empty())
    {

        int ele2 = q2.front();
        q2.pop();
        q.push(ele2);
        /* code */
        int ele1 = q.front();
        q.pop();
        q.push(ele1);
    }

    if (size % 2 != 0)
    {
        int ele1 = q.front();
        q.pop();
        q.push(ele1);
    }
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    // q.push(1);

    InterleaveFirstAnsdSecondHalf(q);

    while (!q.empty())
    {
        /* code */
        cout << q.front() << " ";
        q.pop();
    }
}