#include <iostream>
#include <queue>
#include <map>
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

void PrintLeftView(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
        int levelsize = q.size();

        for (int i = 0; i < levelsize; i++)
        {
            Node* temp = q.front();
            q.pop();

            if (i==0)
            {
                /* code */
                cout<<temp->data<<" ";
            }

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

void PrintLeftViewViaReccursion(Node* root , vector<int> &ans , int level){

    if (root == NULL)
    {
        /* code */
        return;
    }

    if (level == ans.size())
    {
        /* code */
        ans.push_back(root->data);
    }

    PrintLeftViewViaReccursion(root->left , ans , level+1);
    PrintLeftViewViaReccursion(root->right , ans , level+1);

}

int main()
{

    Node *root = NULL;
    root = BuildTree();

    vector<int> ans;
    PrintLeftViewViaReccursion(root,ans,0);
    
}