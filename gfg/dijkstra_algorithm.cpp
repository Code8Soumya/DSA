// gfg


// class Solution {
//   public:
//     vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//         pq.push({0, src});
//         vector<int> ans(adj.size(),INT_MAX);
//         ans[src] = 0;
//         while(!pq.empty()){
//             int dist = pq.top().first;
//             int node = pq.top().second;
//             pq.pop();
//             for(auto it : adj[node]){
//                 int new_dist = dist+it.second;
//                 if(new_dist < ans[it.first]){
//                     ans[it.first] = new_dist;
//                     pq.push({new_dist,it.first});
//                 }
//             }
//         }
//         for(int i=0 ; i<ans.size() ; i++){
//             if(ans[i] == INT_MAX) ans[i] = -1;
//         }
//         return ans;
        
//         set<pair<int,int>> st;
//         st.insert({0,src});
//         vector<int> ans(adj.size(),INT_MAX);
//         ans[src] = 0;
//         while(!st.empty()){
//             auto it = *(st.begin());
//             int dist = it.first;
//             int node = it.second;
//             st.erase(it);
//             for(auto it : adj[node]){
//                 int new_dist = dist+it.second;
//                 int c_node = it.first;
//                 if(new_dist<ans[c_node]){
//                     if(ans[c_node] != INT_MAX){
//                         st.erase({ans[c_node],c_node});
//                     }
//                     ans[c_node] = new_dist;
//                     st.insert({new_dist,c_node});
//                 }
//             }
//         }
//         for(int i=0 ; i<ans.size() ; i++){
//             if(ans[i] == INT_MAX) ans[i] = -1;
//         }
//         return ans;
        
//     }
// };

