
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void PrintLinkedList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *ReverseLinkedListUsingLoop(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    head = prev;
    return prev;
}

Node *ReverseLinkedListUsingRecursion(Node *prev, Node *curr)
{

    if (curr == NULL)
    {
        return prev;
    }

    Node *forward = curr->next;
    curr->next = prev;
    ReverseLinkedListUsingRecursion(curr, forward);
}

int main()
{

    Node *head = new Node(0);
    Node *first = new Node(1);
    Node *sec = new Node(2);
    Node *third = new Node(3);
    Node *tail = new Node(4);

    head->next = first;
    first->next = sec;
    sec->next = third;
    third->next = tail;

    PrintLinkedList(head);

    head = ReverseLinkedListUsingLoop(head);
    PrintLinkedList(head);

    Node *prev = NULL;
    Node *curr = head;

    head = ReverseLinkedListUsingRecursion(prev, curr);
    PrintLinkedList(head);

    return 0;
}