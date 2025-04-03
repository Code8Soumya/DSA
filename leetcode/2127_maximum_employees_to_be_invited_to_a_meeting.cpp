// leetcode

// class Solution {
// public:
//     vector<int> length_of_cycle(int node, int prev_num_nodes, vector<int> &path_vis, vector<int> &vis, vector<vector<int>> &adj){
//         vis[node] = 1;
//         path_vis[node] = prev_num_nodes + 1;
//         for(int i : adj[node]){
//             if(path_vis[i] != 0) return {path_vis[node] - path_vis[i] + 1, i, node};
//             vector<int> ans_length_of_cycle = length_of_cycle(i, path_vis[node], path_vis, vis, adj);
//             if(ans_length_of_cycle[0] != -1) return ans_length_of_cycle;
//         }
//         path_vis[node] = 0;
//         return {-1,-1,-1};
//     }
//     int longest_path(int node, int other_node, vector<vector<int>> &adj){
//         queue<int> q;
//         q.push(node);
//         int path = 0;
//         while(!q.empty()){
//             int n = q.size();
//             while(n--){
//                 int temp = q.front();
//                 q.pop();
//                 for(int i : adj[temp]){
//                     if(i == other_node) continue;
//                     q.push(i);
//                 }
//             }
//             path++;
//         }
//         return path;
//     }
//     int maximumInvitations(vector<int>& favorite) {
//         int n = favorite.size();
//         vector<vector<int>> adj(n);
//         for(int i=0 ; i<n ; i++){
//             adj[favorite[i]].push_back(i);
//         }
//         int max_people_invite = 0;
//         int happy_couple_cycle_length = 0;
//         vector<int> vis(n, 0);
//         vector<int> path_vis(n, 0);
//         for(int i=0 ; i<n ; i++){
//             if(vis[i] == 0){
//                 vector<int> cycle_length = length_of_cycle(i, 0, path_vis, vis, adj);
//                 if(cycle_length[0] == 2){
//                     int f_node = cycle_length[1];
//                     int s_node = cycle_length[2];
//                     happy_couple_cycle_length += (longest_path(f_node, s_node, adj) + longest_path(s_node, f_node, adj));
//                 }
//                 else{
//                     max_people_invite = max(max_people_invite, cycle_length[0]);
//                 }
//             }
//         }
//         max_people_invite = max(max_people_invite, happy_couple_cycle_length);
//         return max_people_invite;
//     }
// };