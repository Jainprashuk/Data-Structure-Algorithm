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

int length(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return 0;
    }

    int leftHeight = length(root->left);
    int rightHeight = length(root->right);

    int ans = max(leftHeight, rightHeight) + 1;

    return ans;
}

int Diameter(Node* root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }

    int case1 = Diameter(root->left);
    int case2 = Diameter(root->right);
    
    int case3 = length(root->left) + length(root->right);

    int ans = max(case1 , max(case2,case3));

    return ans;
  
}

bool CheckIdentical(Node* root1 , Node* root2){
    if (root1==nullptr && root2==nullptr)
    {
        /* code */
        return true;
    }
    
    if (root1!=nullptr && root2!=nullptr){
        return( root1->data == root2->data && CheckIdentical(root1->left , root2->left) && CheckIdentical(root1->right , root2->right));
    }
    
    
}

int main()
{
    Node *root = NULL;
    root = BuildTree();

    LevelOrderTraversal(root);
}