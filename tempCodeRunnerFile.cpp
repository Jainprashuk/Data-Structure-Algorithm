#include<iostream>
using namespace std;

class Node{
   public:
   int data ;
   Node* left;
   Node* right;

   Node(int data){
      this->data  = data;
      left = NULL;
      right = NULL;
   }
};


Node* BuildTree(Node* &root , int data){
   if (root == NULL)
   {
      /* code */
      Node* root = new Node(data);
      return;
   }

   if (data<root->data)
   {
      /* code */
      root->left = BuildTree(root->left , data);
   }else{
      root->right = BuildTree(root->right , data);
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
        BuildTree(root, data);
        cin >> data;
    }
}

int main(){
   Node* root = NULL;
   TakeInput(root);
}