// gfg


// class Solution {
//   public:
//     vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
//         vector<int> adj[N];
//         for(auto it : edges){
//             adj[it[0]].push_back(it[1]);
//             adj[it[1]].push_back(it[0]);
//         }
//         vector<int> sp(N, -1);
//         queue<pair<int, int>> q;
//         q.push({src, 0});
//         // q.push({source, distance})
//         while(!q.empty()){
//             int node = q.front().first;
//             int dist = q.front().second;
//             q.pop();
//             if(sp[node] == -1) sp[node] = dist;
//             for(auto it : adj[node]){
//                 if(sp[it] == -1) q.push({it,dist+1});
//             }
//         }
//         return sp;
//     }
// };
