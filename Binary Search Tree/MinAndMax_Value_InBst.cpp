// approach 1 - by finding InOrder - using extra space

// approach 2 - bs left jate raho jaha rukhe vahi ans hai

// time - o(height)

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

int minElement(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        /* code */
        temp = temp->left;
    }

    return temp->data;
}

int MaxElement(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        /* code */
        temp = temp->right;
    }

    return temp->data;
}


int main()
{

    Node *root = NULL;
    TakeInput(root);

    cout << MaxElement(root);
}