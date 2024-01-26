#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree()
{
    int data;
    cout << "Enter The Data : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // step A
    Node *root = new Node(data);

    // step B
    cout << "Enter Data for left Tree of " << data << ": " << endl;
    root->left = BuildTree();

    // step C
    cout << "Enter Data for right Tree of " << data << ": " << endl;
    root->right = BuildTree();

    return root;
}

void InorderTraversal(Node* root){
    if (root == NULL)
    {
        /* code */
        return;
    }

    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
    
    
}

int main()
{

    Node *root = NULL;
    root = BuildTree();

    InorderTraversal(root);
}