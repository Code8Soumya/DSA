// leetcode

// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         if (k <= 1)
//             return 0;
//         int n = nums.size();
//         int count = 0;
//         int l = 0, r = 0;
//         int product = 1;
//         while (r < n) {
//             product *= nums[r];
//             while (product >= k) {
//                 count += r - l;
//                 product /= nums[l];
//                 l++;
//             }
//             r++;
//         }
//         /* after upper loop the product of subarray
//         at last is always less than k */
//         while (l < n) {
//             count += r - l;
//             l++;
//         }
//         return count;
//     }
// };

