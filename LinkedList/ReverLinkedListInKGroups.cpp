#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void PrintLinkedList(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int Length(Node* head){
    Node* temp = head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node* ReverseLinkedListInKGroups(int k , Node* &head){
    if (head == NULL)
    {
        return NULL;
    }

    int len = Length(head);

    if (k>len)
    {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int count = 0;

    while (curr!=NULL && count < k)
    {
        /* code */
        forward = curr->next;
        curr -> next = prev;

        prev = curr;
        curr = forward;

        count++;
    }

    if (forward!=NULL)
    {
        /* code */
        head->next = ReverseLinkedListInKGroups(k,forward);
    }

    return prev;
    
    
    
    
    
    
}


int main(){

    Node* head = new Node(0);
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* tail = new Node(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    PrintLinkedList(head);
    head = ReverseLinkedListInKGroups(2,head);
    cout<<endl;
    PrintLinkedList(head);


}