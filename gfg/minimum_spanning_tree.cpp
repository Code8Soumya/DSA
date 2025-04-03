// prim's algo

// int spanningTree(int V, vector<vector<int>> adj[]) {
//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
//     pq.push({0, 0});
//     // pq.push({path, node});
//     vector<int> vis(V, 0);
//     int MST_sum = 0;
//     while(!pq.empty()){
//         pair<int,int> temp = pq.top();
//         pq.pop();
//         int path = temp.first;
//         int node = temp.second;
//         if(vis[node]) continue;
//         vis[node] = 1;
//         MST_sum += path;
//         for(auto it : adj[node]){
//             if(vis[it[0]]) continue;
//             pq.push({it[1], it[0]});
//         }
//     }
//     return MST_sum;
// }


// kruskal's algo

// class DisJointSet{
// private:
//     vector<int> parent, size;
// public:
//     DisJointSet(int n){
//         size.resize(n, 1);
//         parent.resize(n);
//         for(int i=0 ; i<n ; i++){
//             parent[i] = i;
//         }
//     }
//     int FindUParent(int node){
//         if(parent[node] == node) return node;
//         return parent[node] = FindUParent(parent[node]);
//     }
//     void UnionBySize(int u, int v){
//         int ulp_u = FindUParent(u);
//         int ulp_v = FindUParent(v);
//         if(ulp_u == ulp_v) return;
//         if(size[ulp_u] > size[ulp_v]){
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v];
//         }
//         else{
//             parent[ulp_u] = ulp_v;
//             size[ulp_v] += size[ulp_u];
//         }
//     }
// };

// class Solution {
// public:
//     int spanningTree(int V, vector<vector<int>> adj[]) {
//         vector<pair<int, pair<int, int>>> edges;
//         // vector<pair<edge_weight, pair<node, adj_node>>>
//         for(int i=0 ; i<V ; i++){
//             int node = i;
//             for(auto it : adj[node]){
//                 int adj_node = it[0];
//                 int wt = it[1];
//                 edges.push_back({wt, {node, adj_node}});
//             }
//         }
//         DisJointSet ds(V);
//         sort(edges.begin(), edges.end());
//         int mst = 0;
//         for(int i=0 ; i<edges.size() ; i++){
//             int wt = edges[i].first;
//             int node = edges[i].second.first;
//             int adj_node = edges[i].second.second;
//             if(ds.FindUParent(node) != ds.FindUParent(adj_node)){
//                 mst += wt;
//                 ds.UnionBySize(node, adj_node);
//             }
//         }
//         return mst;
//     }
// };