// leetcode


// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//         vector<vector<pair<int,int>>> adj(n);
//         for(auto it : flights){
//             adj[it[0]].push_back({it[1],it[2]});
//             //adj[from].push_back({to,distance})
//         }
//         queue<vector<int>> q;
//         q.push({0,0,src});
//         //q.push({stops,distance,node})
//         vector<int> sp(n,INT_MAX);
//         sp[src] = 0;
//         while(!q.empty()){
//             int stops = q.front()[0];
//             int dist = q.front()[1];
//             int from = q.front()[2];
//             q.pop();
//             int n_stops = stops + 1;
//             for(auto it : adj[from]){
//                 if(n_stops > k+1) continue;
//                 int to = it.first;
//                 int n_dist = dist + it.second;
//                 if(n_dist < sp[to]){
//                     sp[to] = n_dist;
//                     q.push({n_stops,n_dist,to}) ;
//                 }
//             }
//         }
//         if(sp[dst] != INT_MAX) return sp[dst];
//         else return -1;
//     }
// };