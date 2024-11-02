// gfg


// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> ans;
//         if(root == NULL) return ans;
//         map<int, int> mpp;
//         // map<x, val> mpp;
//         queue<pair<int, Node*>> q;
//         // queue<pair<x, node>> q;
//         q.push({0, root});
//         while(!q.empty()){
//             Node* node = q.front().second;
//             int x = q.front().first;
//             q.pop();
//             if(mpp.find(x) == mpp.end()){
//                 mpp[x] = node->data;
//             }
//             if(node->left != NULL) q.push({x-1, node->left});
//             if(node->right != NULL) q.push({x+1, node->right});
//         }
//         for(auto it : mpp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }

// };
