// Approach 1 : store inorder time-o(n)  space-o(n)

// class Solution {
// public:
//     void Inorder(TreeNode* root , vector<int>&ans) {
//         if(root == NULL){
//             return ;
//         }

//         Inorder(root->left,ans);
//         ans.push_back(root->val);
//         Inorder(root->right,ans);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int>ans;
//         Inorder(root,ans);

//         for(int i=0 ; i<ans.size() ; i++){
//             cout<<ans[i]<<" ";
//         }
//         return ans[k-1];
//     }
// };







// Approach 2 : by inorder reccursion traversing

// class Solution {
// public:
//     int kthSmallest(TreeNode* root, int& k) {

//         // base case
//         if (root == NULL) {
//             return -1;
//         }

//         // left
//         int leftAns = kthSmallest(root->left, k);
//         if (leftAns != -1) {
//             return leftAns;
//         }

//         // N -> root
//         k--;
//         if (k == 0) {
//             return root->val;
//         }

//         // right
//         int rightAns = kthSmallest(root->right, k);
//         return rightAns;
//     }
// };
