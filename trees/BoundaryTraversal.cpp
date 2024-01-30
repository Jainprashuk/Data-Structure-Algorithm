#include <iostream>
#include <queue>
#include <map>
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

Node *BuildTree()
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

void PrintLeftWaleElement(Node* root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        return;
    }

    cout<<root->data<<" ";

    if (root->left)
    {
        /* code */
        PrintLeftWaleElement(root->left);
    }else{
        PrintLeftWaleElement(root->right);
    }
}

void PrintrighttWaleElement(Node* root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        return;
    }

    

    if (root->right)
    {
        /* code */
        PrintrighttWaleElement(root->left);
    }else{
        PrintrighttWaleElement(root->right);
    }

    cout<<root->data<<" ";
}

void PrintLeafNodes(Node* root){
    if (root == NULL)
    {
        /* code */
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        cout<<root->data<<" ";
    }

    PrintLeafNodes(root->left);
    PrintLeafNodes(root->right);



    
    
}

void BoundryTraversal(Node* root){

    if (root==NULL)
    {
        /* code */
        return;
    }
    
    cout<<root->data<<" ";

    // left wale sare
    PrintLeftWaleElement(root->left);

    // leaf nodes sari
    PrintLeafNodes(root);

    // right wale sare
    PrintrighttWaleElement(root->right);

}

int main()
{

    Node *root = NULL;
    root = BuildTree();

    BoundryTraversal(root);

    // 16 6 4 -1 -1 3 -1 -1 5 2 -1 -1 0 -1 -116 6 4 -1 -1 3 -1 -1 5 2 -1 -1 0 -1 -1
}