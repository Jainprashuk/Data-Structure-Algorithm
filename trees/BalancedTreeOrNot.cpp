// in a tree at each node if a absolute difreence is atmost 1 at it left and right tree

// no of nodes with the longest path between root and leaf

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

int Height(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return 0;
    }

    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int ans = max(leftHeight, rightHeight) + 1;

    return ans;
}

bool BalancedTree(Node* root){
    if (root == NULL)
    {
        /* code */
        return true;
    }

    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int diff = abs(leftHeight-rightHeight);

    bool ans = diff<=1;

    bool leftmereccursion = BalancedTree(root->left);
    bool rightmereccursion = BalancedTree(root->right);

    if (ans && leftmereccursion && rightmereccursion)
    {
        /* code */
        return true;
    }else{
        return false;
    }
    



    
}


int main()
{
    Node *root = NULL;
    root = BuildTree();

    LevelOrderTraversal(root);
}