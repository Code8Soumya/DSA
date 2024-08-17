// leetcode


// Gives TLE on big test cases
// class Solution {
// public:
//     int bfs(int row, int col, vector<vector<int>> &mat){
//         int n = mat.size();
//         int m = mat[0].size();
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         queue< pair< pair<int,int>, int > > q;
//         vis[row][col] = 1;
//         q.push({{row, col}, 0});
//         int drow[] = {-1, 0, 1, 0};
//         int dcol[] = {0, 1, 0, -1};
//         while(!q.empty()){
//             int l_row = q.front().first.first;
//             int l_col = q.front().first.second;
//             int min_dist = q.front().second;
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int n_row = l_row + drow[i];
//                 int n_col = l_col + dcol[i];
//                 if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m){
//                     if(mat[n_row][n_col] == 0){
//                         return  min_dist + 1;
//                     }
//                     else if(!vis[n_row][n_col]){
//                         q.push({{n_row,n_col},min_dist+1});
//                         vis[n_row][n_col] = 1;
//                     }
//                 }
//             }
//         }
//         return -1;
//     }

//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();
//         vector<vector<int>> ans(n, vector<int>(m, 0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(mat[i][j] != 0){
//                     ans[i][j] = bfs(i, j, mat);
//                 }
//             }
//         }
//         return ans;
//     }
// };


// optimised code
// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         vector<vector<int>> ans(n, vector<int>(m, 0));
//         queue< pair< pair<int,int>, int > > q;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(mat[i][j] == 0){
//                     q.push({{i,j},0});
//                     ans[i][j] = 0;
//                     vis[i][j] = 1;
//                 }
//             }
//         }
//         int drow[] = {-1, 0, 1, 0};
//         int dcol[] = {0, 1, 0, -1};
//         while(!q.empty()){
//             int row = q.front().first.first;
//             int col = q.front().first.second;
//             int min_dist = q.front().second;
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int n_row = row + drow[i];
//                 int n_col = col + dcol[i];
//                 if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m){
//                     if(!vis[n_row][n_col]){
//                         q.push({{n_row,n_col},min_dist+1});
//                         vis[n_row][n_col] = 1;
//                         ans[n_row][n_col] = min_dist + 1;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };