#include <iostream>
#include <queue>
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
    cout << "Enter The Value Of Root : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter The Data for left of " << data << " : " << endl;
    root->left = BuildTree();

    cout << "Enter The Data for right of " << data << " : " << endl;
    root->right = BuildTree();

    return root;
}





void PreorderTraversal(Node* root){
    if (root == NULL)
    {
        /* code */
        return;
    }

    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}



int main()
{
    Node *root = NULL;
    root = BuildTree();

}