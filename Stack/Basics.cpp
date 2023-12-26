#include<iostream>
#include<stack>
using namespace std;

void PrintStack(stack<int>st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(309);
    st.push(40);

    PrintStack(st);
    // cout<<st.size();

    // st.pop();
    // cout<<st.size();

    // cout<<st.empty();

}