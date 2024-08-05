// leetcode 

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int l = 0;
//         int r = n-1;
//         int max_area = -1;
//         int area = -1;
//         while(l <= r){
//             area = (r-l)*min(height[l], height[r]);
//             if(area > max_area) max_area = area;
//             if(height[l] <= height[r]) l++;
//             else r--;
//         }
//         return max_area;
//     }
// };