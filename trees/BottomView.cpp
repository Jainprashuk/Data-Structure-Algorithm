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

void PrintBottomView(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }

    map<int, int> topNode;

    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        /* code */
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *tempNode = temp.first;
        int hd = temp.second;

        topNode[hd] = tempNode->data;

        if (tempNode->left)
        {
            /* code */
            q.push(make_pair(tempNode->left, hd - 1));
        }
        if (tempNode->right)
        {
            /* code */
            q.push(make_pair(tempNode->right, hd + 1));
        }
    }

    // printing answer
    for (auto i : topNode)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{

    Node *root = NULL;
    root = BuildTree();
}