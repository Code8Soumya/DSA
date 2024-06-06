// leetcode

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         int j = 0;
//         int min_subarr_len = n + 1; // can be INT_MAX
//         int sub_arr_sum = 0;
//         while (j < n) {
//             sub_arr_sum += nums[j];
//             while (sub_arr_sum >= target) {
//                 min_subarr_len = min(min_subarr_len, j - i + 1);
//                 sub_arr_sum -= nums[i];
//                 i++;
//             }
//             j++;
//         }
//         if (min_subarr_len == n + 1)
//             return 0;
//         return min_subarr_len;
//     }
// };

