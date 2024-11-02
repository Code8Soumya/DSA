// leetcode


// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if (root == NULL || root == p || root == q)
//             return root;
//         TreeNode* l = lowestCommonAncestor(root->left, p, q);
//         TreeNode* r = lowestCommonAncestor(root->right, p, q);

//         // Wrong approach because after we get an LCA the l or r are not 
//         // now comparable to p or q. Its now a different node. 
//         // if (((l == p || l == q) && (r == p || r == q)))
//         //     return root;
//         // if (l == p || l == q)
//         //     return l;
//         // if (r == p || r == q)
//         //     return r;
//         // return NULL;

//         if(l == NULL) return r;
//         if(r == NULL) return l;
//         return root;

//     }
// };