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

void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int LengthOfLinkedList(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void InsertAtHead(int data, Node *&head, Node *&tail)
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
    tail = NewNode;
}

void InsertAtTail(int data, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        Node *NewNode = new Node(data);
        // NewNode->next = head;
        head = NewNode;
        tail = NewNode;
        return;
    }

    Node *NewNode = new Node(data);
    tail->next = NewNode;
    tail = NewNode;
}

void InsertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *NewNode = new Node(data);
        // NewNode->next = head;
        head = NewNode;
        tail = NewNode;
        return;
    }

    if (position == 1)
    {
        InsertAtHead(data, head, tail);
        return;
    }

    int len = LengthOfLinkedList(head);

    if (position >= len)
    {
        InsertAtTail(data, head, tail);
    }

    Node *prev = head;
    int i = 1;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    Node *NewNode = new Node(data);
    NewNode->next = curr;
    prev->next = NewNode;
}

void Delete(int position, Node *&head, Node *&tail)
{
    // if (head = NULL)
    // {
    //     cout<<"no elements";
    // }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = LengthOfLinkedList(head);

    if (position >= len)
    {
        Node *temp = tail;
        Node *prev = head;
        int i = 1;
        while (i < len - 1)
        {
            /* code */
            prev = prev->next;
            i++;
        }
        tail = prev;
        prev->next = NULL;
        delete temp;
        return;
    }

    Node *prev = head;
    int i = 1;
    while (i < position - 1)
    {
        /* code */
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    Node *temp = curr;
    // curr->next = NULL;
    prev->next = curr->next;
    delete temp;
}

Node *ReverseLinkedListViaLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forwad = NULL;

    while (curr != NULL)
    {
        forwad = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forwad;
    }

    return prev;
};
Node *ReverseLinkedListViaRecursion(Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        return prev;
    }

    Node *forward = curr->next;
    curr->next = prev;

    ReverseLinkedListViaRecursion(curr, forward);
};

int MiddleOfLinkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

Node *ReverseInKGroups(int k, Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    int i = 0;
    while (curr != NULL && i < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        i++;
    }

    if (forward != NULL)
    {
        head->next = ReverseInKGroups(k, forward);
    }

    return prev;
}

bool CkeckCircularLinkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            /* code */
            return true;
        }
    }
    return false;
}

int StartPointOfLoop(Node *head)
{
    Node* slow = head;
    Node* fast = head;

    bool hasloops = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            hasloops = true;
            break;
        }
    }

    if (!hasloops)
    {
        /* code */
        return -1;
    }

    slow = head;

    while (slow != fast)
    {
        /* code */
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}


void RemoveLoop(){
    
}

int main()
{

    Node *head = new Node(0);
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *tail = new Node(4);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = tail;
    tail->next = first;

    // PrintLinkedList(head);
    // cout << endl;

    // InsertAtHead(100,head,tail);
    // InsertAtTail(100, head, tail);
    // PrintLinkedList(head);
    // cout << endl<<head->data<<","<<tail->data;

    // InsertAtPosition(233, 2, head, tail);
    // PrintLinkedList(head);
    // cout << endl;

    // Delete(2, head, tail);
    // PrintLinkedList(head);
    // cout << endl;

    // head =ReverseLinkedListViaLoop(head);
    // PrintLinkedList(head);
    // cout<<endl;

    // Node* prev = NULL;
    // Node* curr = head;
    // head = ReverseLinkedListViaRecursion(prev,curr);
    // PrintLinkedList(head);

    // cout<<endl<<MiddleOfLinkedList(head);

    // cout<<endl;

    // head = ReverseInKGroups(2,head);
    // PrintLinkedList(head);

    cout << StartPointOfLoop(head);
}
