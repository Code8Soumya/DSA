// leetcode


// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             vector<int> v;
//             int size = q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 v.push_back(node->val);
//                 if(node->left != NULL) q.push(node->left);
//                 if(node->right != NULL) q.push(node->right);
//             }
//             ans.push_back(v);
//         }
//         return ans;
//     }
// };