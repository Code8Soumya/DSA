// leetcode

// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, long long k) {
//         int n = nums.size();
//         long long len = 0;
//         long long count = 0;
//         long long score = 0;
//         long long sum = 0;
//         int l = 0, r = 0;
//         while (r < n) {
//             len++;
//             score = score + sum + (nums[r] * len);
//             sum += nums[r];
//             while (score >= k) {
//                 count += (len - 1);
//                 sum -= nums[l];
//                 score = score - sum - (nums[l] * len);
//                 l++;
//                 len--;
//             }
//             r++;
//         }
//         while (l < n) {
//             count += len;
//             l++;
//             len--;
//         }
//         return count;
//     }
// };