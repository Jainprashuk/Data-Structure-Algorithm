// 2 approaches : reverse , ll ko array me copy or phir array se nikal lo 
// 3rd approach : 1) find middle 2) reverse after middle 3)then campare atarting one with reversed one


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
    };
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
};

void PrintLinkedList(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* ReverseLinkedList (Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }
    return prev;
}

bool CheckPalindrome(Node* head) {
    Node* reversed = ReverseLinkedList(head);

    while (reversed != NULL && head != NULL) {
        if (reversed->data != head->data) {
            return false;
        }
        reversed = reversed->next;
        head = head->next;
    }
    return true;
}

int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(2);
    Node* tail = new Node(1);

    head->next = first;
    first->next = second;
    second->next = tail;

    PrintLinkedList(head);
    cout << endl;

    if (CheckPalindrome(head)) {
        cout << "Linked list is a palindrome.";
    } else {
        cout << "Linked list is not a palindrome.";
    }
}
