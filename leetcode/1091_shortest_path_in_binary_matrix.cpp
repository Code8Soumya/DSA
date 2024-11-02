// leetcode


// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int n = grid.size();
//         if(n == 1 && grid[0][0] == 0) return 1;
//         if(grid[0][0] == 1 | grid[n-1][n-1] == 1) return -1;
//         queue<vector<int>> q;
//         q.push({0,0,0});
//         //q.push({distance,row,column})
//         vector<vector<int>> sp(n,vector<int> (n,INT_MAX));
//         sp[0][0] = 0;
//         vector<int> drow = {0,1,1,1,0,-1,-1,-1};
//         vector<int> dcol = {1,1,0,-1,-1,-1,0,1};
//         while(!q.empty()){
//             int dist = q.front()[0];
//             int row = q.front()[1];
//             int col = q.front()[2];
//             q.pop();
//             for(int i=0 ; i<8 ; i++){
//                 int n_row = row+drow[i];
//                 int n_col = col+dcol[i];
//                 int n_dist = dist+1;
//                 if(n_row >=0 && n_row < n && n_col >= 0 && n_col < n && grid[n_row][n_col] == 0 && n_dist < sp[n_row][n_col]){
//                     if(n_row == n-1 && n_col == n-1) return n_dist+1;
//                     sp[n_row][n_col] = n_dist;
//                     q.push({n_dist,n_row,n_col});
//                 }
//             }
//         }
//         return -1;
//     }
// };
