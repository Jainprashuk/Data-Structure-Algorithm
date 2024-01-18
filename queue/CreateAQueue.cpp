#include <iostream>
using namespace std;

class Queue
{
public:
    int front;
    int rear;
    int *arr;
    int size;

    Queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    void push(int data)
    {
        if (rear == size)
        {
            /* code */
            cout << "Q is full ";
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void pop()
    {
        if (rear == front)
        {
            /* code */
            cout << "Q is Empty ";
            return;
        }

        arr[front] = -1;
        front++;
        if (rear == front)
        {
            /* code */
            rear = 0;
            front = 0;
        }
    }


    int getFront(){
        if(front == rear){
            cout<<"Q is empty";
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isempty(){
        if(rear == front){
            cout<<"empty";
            return true;
        }else{
            return false;
        }
    }

    int getsize(){
        return rear-front;
    }
};

int main()
{
    Queue q(10);
    q.push(23);
    q.push(23);
    q.push(23);
    q.pop();
    cout<<q.getsize();
    
}