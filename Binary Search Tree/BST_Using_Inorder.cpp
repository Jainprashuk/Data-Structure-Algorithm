// time o(n)


// Node* BstUsingInorder(int inorder[] , int start , int end){
//     if (start>end)
//     {
//         /* code */
//         return NULL;
//     }
//     int mid = (start+end)/2;
//     int element = inorder[mid];

//     Node* root = new Node(element);

//     root->left = BstUsingInorder(inorder , start , mid-1);
//     root->right = BstUsingInorder(inorder , mid+1 , end);

//     return root;

// }