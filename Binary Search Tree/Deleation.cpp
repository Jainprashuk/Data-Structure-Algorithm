// 4 cases:

// 1 - deleating node does not have both left and right node
// 2 - deleating node has left node but not right one
// 3 - deleating node has right node but not left one
// 4 - dealeating node has both left and right node

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

Node *InsertInBst(Node *&root, int data)
{
    if (root == NULL)
    {
        /* code */
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        /* code */
        root->left = InsertInBst(root->left, data);
    }

    if (data > root->data)
    {
        /* code */
        root->right = InsertInBst(root->right, data);
    }

    return root;
}

void *BuildBST(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        /* code */
        InsertInBst(root, data);
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

Node *BinarySearch(Node *root, int target)
{
    if (root == NULL)
    {
        /* code */
        return NULL;
    }

    if (root->data == target)
    {
        /* code */
        return root;
    }

    if (target < root->data)
    {
        /* code */
        return BinarySearch(root->left, target);
    }
    if (target > root->data)
    {
        /* code */
        return BinarySearch(root->right, target);
    }
}

int maxElement(Node *root)
{

    Node *temp = root;
    while (temp->right != NULL)
    {
        /* code */
        temp = temp->right;
    }

    return temp->data;
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

Node *Deleation(Node *&root, int target)
{
    if (root == NULL)
    {
        /* code */
        return root;
    }

    if (target == root->data)
    {
        // 4 cases
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *child = root->left;
            return child;
        }
        else if (root->right != NULL && root->left == NULL)
        {
            Node *child = root->right;
            return child;
        }
        else
        {
            int temp = maxElement(root->left);
            root->data = temp;
            root->left = Deleation(root->left, temp);
            return root;
        }
    }

    if (target < root->data)
    {
        root->left = Deleation(root->left, target);
    }
    if (target > root->data)
    {
        root->right = Deleation(root->right, target);
    }

    return root;
}


int main()
{

    Node *root = NULL;
    BuildBST(root);

    LevelOrderTraversal(root);

    root = Deleation(root , 100);

    LevelOrderTraversal(root);
}