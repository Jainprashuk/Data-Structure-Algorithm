#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int front;
    int rear;
    int *arr;
    int size;

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // queue is full
        if (front == 0 &&rear == size - 1 || (front == rear + 1))
        {
            /* code */
            cout << "Full queue";
            return;
        }

        // inserting first element
        if (front == -1 && rear == -1)
        {
            /* code */
            front = rear = 0;
            arr[rear] = data;
            return;
        }

        // circular nature
        if (rear == size - 1 && front != 0)
        {
            /* code */
            rear = 0;
            arr[rear] = data;
            return;
        }

        // normal / default case

        rear++;
        arr[rear] = data;
    }


    void pop(){
        // empty check
        if (front==-1 && rear == -1)
        {
            /* code */
            cout<<"No element to pop";
            return;
        }
        
        // single element in queue
        if (front == rear)
        {
            /* code */
            arr[front] = -1;
            front = rear = -1;
            return;
        }
        
        // circular nature
        if (front == size-1)
        {
            /* code */
            front = 0;
            return;
        }
        
        // normal / default case
        front ++;

    }
};

int main()
{
}