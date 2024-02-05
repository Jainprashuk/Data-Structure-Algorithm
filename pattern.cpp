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

void PrintLinkedList(Node *head)
{
    while (head != NULL)
    {
        /* code */
        cout << head->data << " ";
        head = head->next;
    }
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
    return count;
}

void InsertAtHead(int data, Node *&head, Node *&tail)
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
    NewNode->next = head;
    head = NewNode;
}

void InsertAtTail(int data, Node *&head, Node *&tail)
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

void InsertAtPosition(int pos, int data, Node *&head, Node *&tail)
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
        InsertAtHead(data, head, tail);
        return;
    }

    int len = LengthOfLinkedList(head);

    if (pos >= len)
    {
        /* code */
        InsertAtTail(data, head, tail);
        return;
    }

    Node *prev = head;
    int i = 0;
    while (i < pos - 1)
    {
        /* code */
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    Node *NewNode = new Node(data);
    NewNode->next = curr;
    prev->next = NewNode;
}

void DeleteInLinkedList(int pos, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        /* code */
        cout << "No Element to DElete";
        return;
    }

    if (pos == 1)
    {
        /* code */
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = LengthOfLinkedList(head);

    if (pos >= len)
    {
        /* code */

        int i = 1;
        Node *prev = head;
        while (i < len - 1)
        {
            /* code */
            prev = prev->next;
            i++;
        }

        Node *temp = tail;
        tail = prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    Node *prev = head;
    int i = 1;
    while (i < pos - 1) // 1 2 3 4 5
    {
        /* code */
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next->next;

    Node *temp = prev->next;
    prev->next = curr;
    temp->next = NULL;
    delete temp;
}

Node *ReverseLinkedListViaLoop(Node *head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *forw = NULL;

    while (curr != NULL)
    {
        /* code */
        forw = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forw;
    }

    return prev;
}

Node *ReverseLinkedListViaReccursion(Node *prev, Node *curr)
{

    if (curr == NULL)
    {
        return prev;
    }

    Node *forward = curr->next;
    curr->next = prev;

    ReverseLinkedListViaReccursion(curr, forward);
}

Node *ReverseLinkedListInKGroups(Node *head, int k)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    int i = 0;

    while (curr != NULL and i < k)
    {
        /* code */
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;

        i++;
    }

    if (forward != NULL)
    {
        /* code */
        head->next = ReverseLinkedListInKGroups(forward, k);
    }

    return prev;
}

int FindMiddleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

void RemoveLoopOfLinkedList(Node *&head)
{

    Node *slow = head;
    Node *fast = head;

    bool hasloop = false;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            /* code */
            hasloop = true;
            break;
        }
    }

    /* code */
    slow = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    while (fast->next != slow)
    {
        fast = fast->next;
    }

    fast->next = NULL;
}

int main()
{
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
    fourth->next = tail;
    tail->next = third;

    // InsertAtHead(100,head,tail);
    // InsertAtTail(1000,head,tail);
    // InsertAtPosition(8,555,head,tail);

    // DeleteInLinkedList(4, head, tail);

    // Node *prev = NULL;
    // Node *curr = head;

    // head = ReverseLinkedListViaLoop(head);
    // head = ReverseLinkedListViaReccursion(prev, curr);
    // head = ReverseLinkedListInKGroups(head, 2);

    // cout<<FindMiddleNode(head);

    RemoveLoopOfLinkedList(head);
    PrintLinkedList(head);
}