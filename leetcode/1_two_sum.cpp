// leetcode 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         int req;
//         vector<int> out;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<n;i++){
//             req = target - nums[i];
//             if(mpp.find(req) != mpp.end()){
//                 out.push_back(i);
//                 out.push_back(mpp[req]);
//                 break;
//             }
//             mpp[nums[i]] = i;
//         }
//         return out;
//     }
// };