// recursion + memoization (top-bottom)

// class Solution {
// public:
//     int rec(int idx, vector<int> &nums, vector<int> &memo){
//         if(idx<0) return 0;
//         if(memo[idx]) return memo[idx];
//         int pick = nums[idx] + rec(idx-2, nums, memo);
//         int not_pick = rec(idx-1, nums, memo);
//         return memo[idx] = max(pick, not_pick);
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> memo(n, 0);
//         return rec(n-1, nums, memo);
//     }
// };


// tabulation (bottom-up)

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> memo(n, -1);
//         memo[0] = nums[0];
//         for(int idx=1 ; idx<n ; idx++){
//             int pick = nums[idx];
//             if(idx >= 2) pick += memo[idx-2];
//             int not_pick = memo[idx-1];
//             memo[idx] = max(pick, not_pick); 
//         }
//         return memo[n-1];
//     }
// };


// tabulation + space optimization (bottom-up)

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         int curr = -1;
//         int prev2 = 0;
//         int prev1 = 0;
//         for(int idx=0 ; idx<n ; idx++){
//             int pick = nums[idx] + prev2;
//             int not_pick = prev1;
//             curr = max(pick, not_pick);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         return curr;
//     }
// };