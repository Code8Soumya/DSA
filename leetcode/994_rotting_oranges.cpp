// leetcode


// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int vis[n][m];
//         int Forange = 0;
//         queue< pair<pair<int,int>, int> > qu;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j] == 2){
//                     vis[i][j] = 1;
//                     qu.push({{i, j},0});
//                 }
//                 else if(grid[i][j] == 1){
//                     vis[i][j] = 0;
//                     Forange++;
//                 }
//                 else{
//                     vis[i][j] = 0;
//                 }
//             }
//         }
//         int time = 0;
//         int FtoR = 0;
//         int drow[] = {-1, 0, 1, 0};
//         int dcol[] = {0, 1, 0, -1}; 
//         while(!qu.empty()){
//             int row = qu.front().first.first;
//             int col = qu.front().first.second;
//             int t = qu.front().second;
//             time = t;
//             qu.pop();
//             for(int i=0;i<4;i++){
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
//                     qu.push({{nrow, ncol}, t+1});
//                     vis[nrow][ncol] = 1;
//                     FtoR++;
//                 }
//             }
//         }
//         if(Forange == FtoR) return time;
//         else return -1;
//     }
// };