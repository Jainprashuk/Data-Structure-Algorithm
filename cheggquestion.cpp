#include<iostream>
#include<stack>
using namespace std;

void FindMiddleElement(stack<int> st , int totalsize){
    if (st.size() == (totalsize/2)+1)
    {
        /* code */
        cout<<st.top();
        return;
    }

    int Element = st.top();
    st.pop();
    
    FindMiddleElement(st,totalsize);

    st.push(Element);
    
}

void InsertAtBottom(stack<int>&st , int target){
    if (st.empty())
    {
        /* code */
        st.push(target);
        return;
    }

    int element = st.top();
    st.pop();

    InsertAtBottom(st,target);

    st.push(element);
    
}

void ReverseStack(stack<int>&st){
    if (st.empty())
    {
        return;
    }

    int element = st.top();
    st.pop();

    ReverseStack(st);

    InsertAtBottom(st,element);
    
}



void PrintStack(stack<int> st){
    while (!st.empty())
    {
        /* code */
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(11);
    st.push(111);
    st.push(1111);
    st.push(11111);
    st.push(11111);

    // PrintStack(st);
    // FindMiddleElement(st,st.size());
    InsertAtBottom(st,0);
    PrintStack(st);
    cout<<endl;
    ReverseStack(st);
    PrintStack(st);
}