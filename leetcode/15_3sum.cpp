// leetcode

// class Solution {
// public:
//     // Optimal
//     vector<vector<int>> threeSum(vector<int>& nums){
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(i!=0 && nums[i]==nums[i-1]) continue;
//             int j = i+1;
//             int k = n-1;
//             while(j<k){
//                 int sum = nums[i]+nums[j]+nums[k];
//                 if(sum==0){
//                     vector<int> v = {nums[i],nums[j],nums[k]};
//                     ans.push_back(v);
//                     j++;
//                     k--;
//                     while(j<k && nums[j]==nums[j-1]) j++;
//                     while(j<k && nums[k]==nums[k+1]) k--;
//                 }
//                 else if(sum<0) j++;
//                 else k--;
//             }
//         }
//         return ans;
//     }

//     // Better
//     // vector<vector<int>> threeSum(vector<int>& nums){
//     //     set<vector<int>> st;
//     //     int n = nums.size();
//     //     for(int i=0;i<n;i++){
//     //         set<int> hashset;
//     //         for(int j=i+1;j<n;j++){
//     //             int var = -(nums[i]+nums[j]);
//     //             if(hashset.find(var) != hashset.end()){
//     //                 vector<int> v = {nums[i],nums[j],var};
//     //                 sort(v.begin(),v.end());
//     //                 st.insert(v);
//     //             }
//     //             hashset.insert(nums[j]);
//     //         }
//     //     }
//     //     vector<vector<int>> ans(st.begin(),st.end());
//     //     return ans;
//     // }
// };