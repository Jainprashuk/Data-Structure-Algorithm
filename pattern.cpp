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

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // step A
        Node *temp = q.front();

        // step B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // step c
            cout << temp->data << " ";

            // step d
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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

void PostorderTraversal(Node* root){
    if (root == NULL)
    {
        /* code */
        return;
    }

    
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node *root = NULL;
    root = BuildTree();

    LevelOrderTraversal(root);
}