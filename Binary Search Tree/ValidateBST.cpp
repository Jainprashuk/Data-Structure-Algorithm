// approach 1 : by in-order Traversal - o(n)
// approach 2 : Reccursion

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

bool Solve(Node *root, long long int lowerbound, long long int upperbound)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->data > lowerbound && root->data < upperbound)
    {
        int leftwalatree = Solve(root->left, lowerbound, root->data);
        int rightwalatree = Solve(root->right, root->data, upperbound);

        return leftwalatree && rightwalatree;
    }
    else
    {
        return false;
    }
}

bool isValidBST(Node *root)
{
    long long int lowerbound = -4294967296;
    long long int upperbound = 4294967296;

    bool ans = Solve(root, lowerbound, upperbound);
    return ans;
}

int main()
{

    Node *root = NULL;
    BuildBST(root);

    LevelOrderTraversal(root);

    cout << isValidBST(root);
}