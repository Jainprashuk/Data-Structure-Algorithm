// 2 approaches - by finding length , by 2 pointers (tortoise algorithm, slow and fast pointer approach)

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int length(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next  ;  
    }

    // cout<<"length = "<<count;
    return count;  
}

void MiddleElementViaLength(Node* head){
    int len = length(head);
    int start = 1;
    int mid = (len+start)/2;
        Node*temp = head;
        int i=1;
        while (i<mid)
        {
            temp = temp->next;
            i++;
        }
        cout<<temp->data;
}

int MiddleElementViaSlowFast(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next  != NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return slow->data;
}

main()
{

    // Creating nodes for a linked list
    Node* Head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);
    // Node* fifth = new Node(6);

    // Linking the nodes together to form a linked list
    Head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;

    // Printing the linked list starting from the Head node
    print(Head);


    // MiddleElementViaLength(Head);
    int middle = MiddleElementViaSlowFast(Head);
    cout<<middle;

    
}