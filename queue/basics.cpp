// 2 pointers - front , back 
// front - deletion
// back - insertion

// queues are mostly asked in graphs or sliding window

// deque   - doubly Ended Queue 
// dequeue - pop
// enqueue - push 

// Input Restricted Queue - nput restricted queue is a special case of a double-ended queue where data can be inserted from one end(rear) but can be removed from both ends (front and rear). This kind of Queue does not follow FIFO(first in first out)

// output Restricted Queue - An output-restricted queue is a special case of a double-ended queue where data can be removed from one end(front) but can be inserted from both ends (front and rear). This kind of Queue does not follow FIFO

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    // cout<<q.size();
    q.push(10);
    q.push(20);
    // cout<<q.front();
}