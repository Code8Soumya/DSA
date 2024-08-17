// leetcode


// class Solution {
// public:
//     int trap(vector<int>& height) {
//         optimal solution time-O(N) && space-O(1)
//         int n = height.size();
//         int total=0,l=0,r=n-1,lmax=-1,rmax=-1;
//         while(l<r){
//             if(height[l]<=height[r]){
//                 if(lmax>height[l]) total+=(lmax-height[l]);
//                 else lmax=height[l];
//                 l++;
//             }
//             else{
//                 if(rmax>height[r]) total+=(rmax-height[r]);
//                 else rmax=height[r];
//                 r--;
//             }
//         }
//         return total;

//         vector approach time-O(N) & space-O(N)
//         int n = height.size();
//         vector<int> nums(n);
//         int max = -1;
//         for(int i=0;i<n;i++){
//             nums[i] = max;
//             if(height[i] > max) max = height[i];
//         }
//         max = -1;
//         for(int i=n-1;i>=0;i--){
//             if(max < nums[i]) nums[i] = max;
//             if(height[i] > max) max = height[i];
//         }
//         int water_trapped = 0;
//         for(int i=0;i<n;i++){
//             if(height[i] < nums[i]) water_trapped += (nums[i] - height[i]);
//         }
//         return water_trapped;
//     }
// };