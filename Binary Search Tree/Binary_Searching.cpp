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

bool BinarySearch(Node* root , int target){
    if (root == NULL)
    {
        /* code */
        return false;
    }

    if (root->data == target)
    {
        /* code */
        return true;
    }

    if (target > root->data)
    {
        /* code */
        return BinarySearch(root->right,target);

    }else{
        return BinarySearch(root->left , target);
    }


    
    
    
}


int main()
{

    Node *root = NULL;
    TakeInput(root);

    bool ans = BinarySearch(root , 14);
    if (ans)
    {
        /* code */
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}