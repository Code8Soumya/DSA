// gfg


// class Solution {
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool dfs(int node, int prev_node, vector<int> &vis, vector<int> adj[]){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 if(dfs(it, node, vis, adj)) return true;
//             }
//             else if(it != prev_node) return true;
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V, 0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(dfs(i, -1, vis, adj)) return true;
//             }
//         }
//         return false;
//     }
// };


// class Solution {
    
// private:
//     bool bfs(int node, vector<int> &vis, vector<int> adj[]){
//         queue<pair<int, int>> q;
//         // q.push({prev_node, node})
//         q.push({-1, node});
//         vis[node] = 1;
//         while(!q.empty()){
//             int node = q.front().second;
//             int prev_node = q.front().first;
//             q.pop();
//             for(auto it : adj[node]){
//                 if(!vis[it]){
//                     vis[it] = 1;
//                     q.push({node, it});
//                 }
//                 else if(prev_node != it){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
    
// public:
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V, 0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(bfs(i, vis, adj)) return true;
//             }
//         }
//         return false;
//     }
    
// };
