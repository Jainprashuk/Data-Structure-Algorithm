

// pair<bool , int> solve(Node* root){
//     if (root==NULL)
//     {
//         /* code */
//         pair<bool,int> p = make_pair(true,INT_MIN);
//         return p;
//     }

//     if (root->left == NULL && root->right == NULL){
//         pair<bool,int> p = make_pair(true,root->data);
//         return p;
//     }

//     pair<bool,int> leftans = solve(root->left);
//     pair<bool,int> rightans = solve(root->right);

//     if (leftans.first == true && rightans.first == true && root->data > leftans.second && root->data > rightans.second);

//     {
//         /* code */
//         pair<bool,int> p = make_pair(true,root->data);
//         return p;
//     }else{
//         pair<bool,int> p = make_pair(false,INT_MIN);
//         return p;
//     }
// }