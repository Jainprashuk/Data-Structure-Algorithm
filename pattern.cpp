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
        left = nullptr;
        right = nullptr;
    }
};

Node *BuildTree()
{
    int data;
    cout << "Enter The value of root : ";
    cin >> data;

    if (data == -1)
    {
        /* code */
        return nullptr;
    }

    Node *root = new Node(data);

    cout << "Enter data for left of " << data << " :" << endl;
    root->left = BuildTree();

    cout << "Enter data for right of " << data << " :" << endl;
    root->right = BuildTree();

    return root;
}

void LevelOrderTraversing(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        Node *temp = q.front();

        q.pop();

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

void InOrderTraversing(Node *root)
{
    if (root == nullptr)
    {
        /* code */
        return;
    }

    InOrderTraversing(root->left);
    cout<<root->data<<" ";
    InOrderTraversing(root->right);
}

void PreOrderTraversal(Node* root){
    if (root==nullptr)
    {
        /* code */
        return ;
    }

    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

    
}
void PostOrderTraversal(Node* root){
    if (root==nullptr)
    {
        /* code */
        return ;
    }

    
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";

    
}

int depth(Node* root){
    if (root==nullptr)
    {
        /* code */
        return 0;
    }
    
    int leftdepth = depth(root->left);
    int rightdepth = depth(root->right);

    int ans = max(leftdepth , rightdepth)+1;
    return ans;
}

int diameter(Node* root){
    if (root==nullptr)
    {
        /* code */
        return 0;
    }

    int leftonly = diameter(root->left);
    int rightonly = diameter(root->right);

    int rootalso = depth(root->left)+depth(root->right);

    int ans = max(rootalso , max(leftonly,rightonly));
    return ans;
    
    
}

int main()
{

    Node *root = nullptr;
    root = BuildTree();

    PostOrderTraversal(root);
}