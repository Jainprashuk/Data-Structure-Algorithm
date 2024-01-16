#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    Node()
    {
        data = 0;
        Next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};

void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

int LengthOfLinkedList(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->Next = head;
    head = newNode;
}

void InsertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    tail->Next = newNode;
    tail = newNode;
}

void InsertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (pos == 0)
    {
        InsertAtHead(head, tail, data);
        return;
    }

    int len = LengthOfLinkedList(head);

    if (pos >= len)
    {
        InsertAtTail(head, tail, data);
        return;
    }

    int i = 0;
    Node *prev = head;
    while (i < pos - 1)
    {
        prev = prev->Next;
        i++;
    }
    Node *curr = prev->Next;
    Node *newNode = new Node(data);
    newNode->Next = curr;
    prev->Next = newNode;
}

void Delete(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        cout << "cant delete" << endl;
        return;
    }

    if (pos == 1)
    {
        Node *temp = head;
        head = head->Next;
        temp->Next = NULL;
        delete temp;
        return;
    }

    int len = LengthOfLinkedList(head);
    if (pos == len)
    {
        int i = 1;
        Node *prev = head;
        while (i < len - 1)
        {
            prev = prev->Next;
            i++;
        }
        Node *temp = tail;
        tail = prev;
        tail->Next = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < pos - 1)
    {
        prev = prev->Next;
        i++;
    }
    Node *curr = prev->Next;

    prev->Next = curr->Next;
    curr->Next = NULL;
    delete curr;
}

bool CheckCircularLinkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast->Next != NULL && fast != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int StartingPointOfLinkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    bool hasloop = false;

    while (fast->Next != NULL && fast != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;

        if (slow == fast)
        {
            hasloop = true;
            break;
        }
    }
    if (hasloop)
    {
        slow = head;
        while (slow != fast)
        {

            slow = slow->Next;
            fast = fast->Next;
        }
    }
    else
    {
        cout << "no loop";
    }

    return slow->data;
}

Node *ReverseLinkedListViaLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        /* code */
        forward = curr->Next;
        curr->Next = prev;

        prev = curr;
        curr = forward;
    }

    return prev;
}

Node *ReverseLinkedListViaReccursion(Node *prev, Node *curr)
{

    if (curr == NULL)
    {
        return prev;
    }

    Node *forward = curr->Next;
    curr->Next = prev;

    ReverseLinkedListViaReccursion(curr, forward);
}

int MiddleOfLinkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->Next != NULL)
    {
        /* code */
        fast = fast->Next->Next;
        slow = slow->Next;
    }

    return slow->data;
}

Node *RemoveLinkedListInKGrops(int k, Node *head)
{
    int len = LengthOfLinkedList(head);
    if (k > len)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    int i = 0;
    while (i < k)
    {
        /* code */
        forward = curr->Next;
        curr->Next = prev;

        prev = curr;
        curr = forward;

        i++;
    }

    if (forward != NULL)
    {
        /* code */
        head->Next = RemoveLinkedListInKGrops(k, forward);
    }

    return prev;
}

int main()
{
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *fourth = new Node(5);
    Node *fifth = new Node(6);

    head->Next = first;
    first->Next = second;
    second->Next = third;
    third->Next = fourth;
    fourth->Next = fifth;

    PrintLinkedList(head);

    // Node *prev = NULL;
    // Node *curr = head;
    Node *Reversed = RemoveLinkedListInKGrops(2, head);
    PrintLinkedList(Reversed);

    // cout << MiddleOfLinkedList(head);

    // cout << StartingPointOfLinkedList(head);
}