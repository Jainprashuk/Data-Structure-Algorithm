#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    // Default constructor initializing data to 0 and Next pointer to nullptr
    Node()
    {
        this->data = 0;
        this->Next = nullptr;
    }

    // Constructor with a parameter to set data and initialize Next pointer to NULL
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};

// Function to print the linked list starting from the given Head node
void PrintLinkedList(Node* &Head){
    Node* temp = Head;
    // Loop through the linked list until temp becomes NULL
    while (temp != NULL)
    {
        // Print the data of the current node followed by <
        cout << temp->data << " ";
        // Move temp to the next node in the list
        temp = temp->Next;
    }
}

int main()
{
    // Creating nodes for a linked list
    Node* Head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);

    // Linking the nodes together to form a linked list
    Head->Next = first;
    first->Next = second;
    second->Next = third;
    third->Next = fourth;

    // Printing the linked list starting from the Head node
    PrintLinkedList(Head);
}
