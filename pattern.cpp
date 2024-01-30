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
        next = NULL;
    }
};

void PrintLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertAtHead(Node *&head, int data, Node *&tail)
{
    if (head == NULL)
    {
        Node *NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        return;
    }

    Node *NewNode = new Node(data);
    NewNode->next = head;
    head = NewNode;
}

void InsertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        /* code */
        Node *NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        return;
    }

    Node *NewNode = new Node(data);
    tail->next = NewNode;
    tail = NewNode;
}

int LengthOfLinkedList(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        /* code */
        count++;
        head = head->next;
    }

    cout << "Length : " << count << endl;
    return count;
}

void InsertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (head == NULL)
    {
        /* code */
        Node *NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        return;
    }

    if (pos == 0)
    {
        /* code */
        InsertAtHead(head, data, tail);
        return;
    }

    int length = LengthOfLinkedList(head);

    if (pos >= length)
    {
        /* code */
        InsertAtTail(head, tail, data);
        return;
    }

    int i = 0;
    Node *prev = head;
    while (i < pos - 1)
    {
        /* code */
        prev = prev->next;
        i++;
    }

    cout << prev->data << endl;
    Node *curr = prev->next;

    Node *NewNode = new Node(data);
    NewNode->next = curr;
    prev->next = NewNode;
}

void Deleation(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        /* code */
        cout << " No Elemt To DElete";
        return;
    }

    if (pos = 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int length = LengthOfLinkedList(head);

    if (pos == length)
    {

        int i = 0;
        Node *prev = head;
        while (i < length - 1)
        {
            /* code */
            prev = prev->next;
            i++;
        }
        Node *temp = tail;
        tail = prev;
        tail->next = NULL;    
        delete temp;
    }
}

int main()
{

    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *tail = new Node(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = tail;

    Deleation(head, tail, 5);

    PrintLinkedList(head);
}