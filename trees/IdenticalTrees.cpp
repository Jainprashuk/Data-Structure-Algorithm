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

bool IdenticalTrees(Node* root1 , Node* root2){
    if (root1==NULL && root2==NULL)
    {
        return 1;
    }

    if (root1!=NULL && root2!=NULL)
    {
        /* code */
        return(root1->data == root2->data && IdenticalTrees(root1->left,root2->left) && IdenticalTrees(root1->right,root2->right))  ;
    }

    return 0;

}


int main()
{
    Node *root = NULL;
    root = BuildTree();

    LevelOrderTraversal(root);
}