#include<iostream>
using namespace std;

class Stack{
    private:
    int top;
    int size;
    int* arr;

    public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
    }

    void push(int data){
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else{
            cout<<"overflow";
        } 
    }

    void pop(){
        if(top == -1){
            cout<<"underflow";
        }else{
            top--;
        }
    }

    int getsize(){
        return top+1;
    }

    bool isempty(){
        if (top == -1)
        {
            return true;
        }else{
            return false;
        }
    }

    int topelement(){
        return arr[top];
    }
};

int main(){

    Stack s(5);

    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.pop();


    while (!s.isempty())
    {
        /* code */
        cout<<s.topelement()<<" ";
        s.pop();
    }
    
}