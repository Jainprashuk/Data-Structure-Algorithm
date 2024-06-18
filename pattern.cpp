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

void Inorder(Node* root){

    if(root == nullptr){
        return;
    }

    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}

void LevelOrderTraversing(Node* root){
    if(root == NULL) return ;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();

        q.pop();

        cout<<temp->data;

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

Node* BuildTree(){
    int data;
    cout << "Enter The Data : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout<<"Enter For Left of tree : "<<endl;
    root->left = BuildTree();

    cout<<"Enter For right of tree : "<<endl;
    root->right = BuildTree();


    return root;


}


int main(){
    Node* root = NULL;
    root = BuildTree();

    LevelOrderTraversing(root);
}