#include<iostream>
using namespace std;

class Node{
    public:
    int data ; 
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree(){
    int data ;
    cout<<"Enter The Data of Node : ";
    cin>>data;

    if (data == -1)
    {
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"enter the data for left of "<<data<<" : "<<endl;
    root->left = BuildTree();
    cout<<"enter the data for right of "<<data<<" : "<<endl;
    root->right = BuildTree();

    return root;   
}

Node* BuildBST(Node* &root , int data){
    if (root == NULL)
    {
        /* code */
        Node* root = new Node(data);
        return root;
    }

    if (data<root->data)
    {
        /* code */
        root->left = BuildBST(root , data);
    }
    else if (data>root->data)
    {
        /* code */
        root->right = BuildBST(root , data);
    }

    return root;
    
    
}

void BUIldingBST(Node* &root){
    int data;
    cin>>data;

    while (data != -1)
    {
        /* code */
        BuildBST(root,data);
        cin>>data;
    }
}

int main(){
    Node* root = NULL;
    root = BuildTree();
}