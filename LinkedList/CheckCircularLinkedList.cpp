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

void PrintLinkedList(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int Length(Node* head){
    Node* temp = head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool CheckCircular(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL  && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow ->next;
        if (fast == slow)
        {
            return true;
        }
        
    }

    return false;
    

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
    // fourth->next = head;

    // PrintLinkedList(head);
    cout<<CheckCircular(head);
   


}