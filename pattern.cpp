#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree(){
    cout<<"Enter The Data of Node :";
    int data;
    cin>>data;

    if (data == -1)
    {
        /* code */
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"Enter the data for left of "<<data<<" : "<<endl;
    root->left = BuildTree();

    cout<<"Enter the data for right of "<<data<<" : "<<endl;
    root->right = BuildTree();

    return root;
    
}

void LevelOrderTraversing(Node* root){
    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        /* code */
    }
    
}

int main(){

}