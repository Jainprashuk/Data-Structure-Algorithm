// can be done by : single pointer , slow fast algo , by using mapp
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

int StartPointOfLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    bool hasloop = false;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            /* code */
            hasloop = true;
            break;
        }
        
    }

    if (hasloop)
    {
        slow = head;

        while (slow!=fast)
        {
            /* code */
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
        
    }
    
    


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
    fourth->next = third;

    // PrintLinkedList(head);
    cout<<StartPointOfLoop(head);
   


}