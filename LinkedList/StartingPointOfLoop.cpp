#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next= nullptr;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};


void PrintLinkedList(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int CheckCircular(Node* head){

    Node* slow = head;
    Node* fast = head;

    bool hascycle = false;

    while (fast != nullptr &&  fast->next!=nullptr)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
        if (slow == fast)
        {
            // cout<<"loop found"<<endl;
             hascycle = true;
             break;;
        } 
        
    } 

    if (!hascycle)
    {
        return -1;
    }

    slow = head;

    while (slow!= fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    


    return slow->data;
    
}

int main(){

 Node* head =  new Node(0);
    Node* first = new  Node(1);
   
    Node* second =  new Node(2);
    Node* third =  new Node(3);
    Node* fourth =  new Node(4);
    Node* fifth =  new Node(5);
    Node* sixth =  new Node(6);
    Node* seventh =  new Node(7);
    Node* tail =  new Node(8);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;


    seventh->next = tail;
    tail->next = fourth;

    // PrintLinkedList(head);
    cout<<CheckCircular(head);

}
