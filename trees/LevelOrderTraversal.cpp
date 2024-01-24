// using  queue

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
    cout << "Enter The Data : " << endl;
    cin >> data;

    if (data == -1)
    {
        /* code */
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

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // step A
        Node *temp  = q.front();

        //step B
        q.pop();

        if (temp == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }else{
            
        

        // step c
        cout << temp->data << " ";

        // step D
        if (temp->left)
        {
            /* code */
            q.push(temp->left);
        }
        if (temp->right)
        {
            /* code */
            q.push(temp->right);
        }
        }
        

        
    }
}

int main()
{

    Node *root = NULL;
    root = BuildTree();

    LevelOrderTraversal(root);
}