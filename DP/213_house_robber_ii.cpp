// tabulation + space optimization

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1) return nums[0];

//         int curr = -1;
//         int prev2 = 0;
//         int prev1 = 0;
//         for(int idx=0 ; idx<n-1 ; idx++){
//             int pick = nums[idx] + prev2;
//             int not_pick = prev1;
//             curr = max(pick, not_pick);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         int ans1 = curr;

//         prev2 = 0;
//         prev1 = 0;
//         for(int idx=1 ; idx<n ; idx++){
//             int pick = nums[idx] + prev2;
//             int not_pick = prev1;
//             curr = max(pick, not_pick);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         int ans2 = curr;

//         return max(ans1, ans2);
//     }
// };