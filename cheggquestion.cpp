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
        this->data = data;
        this->next = NULL;
    }
};

void PrintLinkedList(Node* head , Node* tail){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
    cout<< "( head , tail ) = ("<<head->data<<","<<tail->data<<")"<<endl;
    cout<<endl;
}

int LengthOfLinkedList(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(int data ,Node* &head , Node* &tail ){
    if (head == NULL)
    {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        return;
    }
    Node* NewNode = new Node(data);
    NewNode->next = head;
    head = NewNode;
}

void insertAtTail(int data ,Node* &head , Node* &tail){
    if (head == NULL)
    {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
        return;
    }

    Node* NewNode =  new Node(data);
    tail->next = NewNode;
    tail = NewNode;
}

void insertAtPosition(int data , int pos , Node* &head , Node* &tail){

    if (pos == 0)
    {
        insertAtHead(data,head,tail);
        return;
    }
    
    int len = LengthOfLinkedList(head);

    if (pos >= len)
    {
        insertAtTail(data,head,tail);
        return;
    }

    Node* NewNode = new Node(data);
    Node* prev = head;
    int i = 1;
    while (i<pos-1)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    
    NewNode->next = curr;
    prev->next = NewNode;
    
}

void DeleateAtPosition(int position , Node* &head , Node* &tail){
    if (head == NULL)
    {
        cout<<"Linked List Is Empty";
        return;
    }

    if (position==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = LengthOfLinkedList(head);

    if (len == position)
    {
        Node* prev = head;
        int i =1;
        while (i<len-1)
        {
            prev = prev -> next;
            i++;
        }
        Node* temp = tail;
        tail = prev;
        prev->next = NULL;
        delete temp;
        return; 
    }

    int i = 1;
    Node* prev = head;
    while (i<position-1)
    {
        prev = prev->next;
        i++;
    }
    
    Node* curr = prev->next;

    Node* temp = curr;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return;
    
}


Node* ReverseLinkedList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    return prev;
}

Node* ReverseLinkedListViaRecursion(Node* &prev , Node* &curr ){
    if (curr == NULL)
    {
        return prev;
    }

    Node* forward = curr->next;
    curr->next = prev;

    ReverseLinkedListViaRecursion(curr,forward);

}

int MiddleElementVia(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast->next != NULL && fast->next->next !=NULL)
    {
        slow = slow->next;
        fast = fast ->next->next;
        
    }
    
    return slow->data;
}

Node* ReverseLinkedListInKGroups(int k , Node* head){

    int len = LengthOfLinkedList(head);

    if (k>len)
    {
        return head;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

int count = 0;
    while (curr!=NULL && count<k)
    {
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;

        count++;
    }

    if(forward!=NULL){
        head->next = ReverseLinkedListInKGroups(k,forward);
    }

    return prev;
    
}


bool CheckCircular(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast!=NULL && fast->next!=NULL)
    {

        slow=slow->next;
        fast=fast->next->next;

        if (fast==slow)
        {
            return true;
        }

        
    }
  return false;  
}

int StartPointOfLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    bool hascycle = false;

    while (fast!=NULL && fast->next!=NULL)
    {
        fast= fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            hascycle = true;
            break;
        }
        
    }

    if (!hascycle)
    {
        return -1;
    }
    
slow = head;

    while (slow != fast)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->data;
    
}





int main(){

    // Node* head = NULL;
    // Node* tail = NULL;


    // insertAtHead(5,head,tail);
    // insertAtHead(15,head,tail);
    // insertAtHead(51,head,tail);
    // insertAtHead(53,head,tail);
    // insertAtTail(1000,head,tail);
    // PrintLinkedList(head,tail);
    // insertAtPosition(0,1,head,tail);
    // PrintLinkedList(head,tail);
    // DeleateAtPosition(4,head,tail);
    // PrintLinkedList(head,tail);

    // Node* Reversed = ReverseLinkedList(head);
    // cout<<"reversed linked list : ";
    // PrintLinkedList(Reversed,tail);

    // Node* prev = NULL;
    // Node* curr = head;

    // Node* ReversedRecursion = ReverseLinkedListViaRecursion(prev,curr);
    // cout<<"reversed linked list : ";
    // PrintLinkedList(ReversedRecursion,tail);

    // head = ReverseLinkedListViaRecursion(prev , curr);
    // PrintLinkedList(head,tail);

    // cout<<MiddleElementVia(head);

    // head = ReverseLinkedListInKGroups(2,head);
    // PrintLinkedList(head,tail);

    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);
    Node* tail = new Node(6);
    head->next = first;
    first->next = second;
    second->next=third;
    third->next=fourth;
    fourth->next=tail;
    tail->next=second;
    // cout<<CheckCircular(head);
    cout<<StartPointOfLoop(head);






}