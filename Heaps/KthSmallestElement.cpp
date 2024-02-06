#include <iostream>
#include <queue>
using namespace std;

// we can do it with min heap but it will take space - o(n)
// but with max heap we can do it in

int KthSmallestElementUsingMinHeap(priority_queue<int, vector<int>, greater<int>> minheap, int k)
{

    int i = 0;

    for (int i = 0; i < k - 1; ++i)
    {
        minheap.pop();
    }

    return minheap.top();
}

// approach Through max heap : pehle k elements ka max heap banao and then baki elements me check kro , yadi vo element top se chota hai to top ko pop karke usko insert krdo
int KthSmallestElementUsingMaxHeap(vector<int> v, int k)
{
    priority_queue<int> maxheap;

    for (int i = 0; i < k; i++)
    {
        /* code */
        maxheap.push(v[i]);
    }

    for (int i = k; i < v.size(); i++)
    {
        /* code */
        if (v[i] < maxheap.top())
        {
            maxheap.pop();
            maxheap.push(v[i]);
        }
    }

    return maxheap.top();
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(2);
    minheap.push(3);
    minheap.push(5);
    minheap.push(1);
    minheap.push(4);
    minheap.push(22);

    vector<int> v;
    v.push_back(3);
    v.push_back(11);
    v.push_back(6);
    v.push_back(9);
    v.push_back(4);
    v.push_back(12);
    v.push_back(2);
    v.push_back(8);
    cout << KthSmallestElementUsingMaxHeap(v, 3);

    // cout<<KthSmallestElementUsingMinHeap(minheap , 2);
}