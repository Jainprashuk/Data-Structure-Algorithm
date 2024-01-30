#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int *arr;
    int top;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            /* code */
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Not Enough Space";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            /* code */
            cout << "Nothing To pop";
        }
        else
        {
            top--;
        }
    }

    bool isempty(){
        if (top==-1)
        {
            return true;
        }else{
            return false;
        }
        
    }

    int gettop(){
        return arr[top];
    }
};

void Printstack(stack st){
    while (!st.isempty())
    {
        /* code */
        cout<<st.gettop()<<" ";
        st.pop();
    }
    
}

int main()
{
    stack st(6);

    st.push(12);
    st.push(12);
    st.push(12);
    st.push(12);
    st.push(12);
    st.pop();

    Printstack(st);

}