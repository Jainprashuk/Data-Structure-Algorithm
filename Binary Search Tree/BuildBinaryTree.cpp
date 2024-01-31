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

Node *BuildBST(Node *&root, int data)
{
    if (root == NULL)
    {
        /* code */
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = BuildBST(root->left, data);
    }
    else
    {
        root->right = BuildBST(root->right, data);
    }

    return root;
}

void TakeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        /* code */
        BuildBST(root, data);
        cin >> data;
    }
}

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        /* code */
        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            /* code */
            cout << endl;
            if (!q.empty())
            {
                /* code */
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

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
    TakeInput(root);

    LevelOrderTraversal(root);
}