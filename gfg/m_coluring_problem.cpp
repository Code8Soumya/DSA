// gfg


// class Solution {
//   public:
//     bool check(int curr_col, int curr_v, vector<int> &vis, vector<vector<int>> &adj_lst){
//         for(auto it : adj_lst[curr_v]){
//             if(vis[it] == curr_col) return false;
//         }
//         return true;
//     }
//     bool color(int curr_v, int v, int m, vector<int> &vis, vector<vector<int>> &adj_lst){
//         if(curr_v == v) return true;
//         for(int i=0 ; i<m ; i++){
//             if(check(i, curr_v, vis, adj_lst)){
//                 vis[curr_v] = i;
//                 if(color(curr_v+1, v, m, vis, adj_lst)) return true;
//                 else vis[curr_v] = -1;
//             }
//         }
//         return false;
//     }
//     bool graphColoring(int v, vector<pair<int, int>>& edges, int m){
//         vector<vector<int>> adj_lst(v);
//         for(auto it : edges){
//             adj_lst[it.first].push_back(it.second);
//             adj_lst[it.second].push_back(it.first);
//         }
//         vector<int> vis(v, -1);
//         for(int i=0 ; i<v ; i++){
//             if(vis[i] == -1){
//                 if(color(i, v, m, vis, adj_lst)) continue;
//                 else return false;
//             }
//         }
//         return true;
//     }
// };
