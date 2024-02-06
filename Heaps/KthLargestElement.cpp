#include <iostream>
#include <queue>
using namespace std;

int findKthLargest(vector<int>& v, int k) {
        priority_queue<int , vector<int> , greater<int>> minheap;

    for (int i = 0; i < k; i++)
    {
        /* code */
        minheap.push(v[i]);
    }

    for (int i = k; i < v.size(); i++)
    {
        /* code */
        if (v[i] > minheap.top())
        {
            minheap.pop();
            minheap.push(v[i]);
        }
    }

    return minheap.top();
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
    cout << findKthLargest(v, 3);

    // cout<<KthSmallestElementUsingMinHeap(minheap , 2);
}