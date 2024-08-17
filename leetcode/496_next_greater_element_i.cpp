// leetcode


// map approach O(N^2) 
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int> mpp;
//         for(int i=0;i<nums2.size();i++){
//             for(int j=i;j<nums2.size();j++){
//                 if(nums2[j]>nums2[i]){
//                     mpp[nums2[i]] = nums2[j];
//                     break;
//                 }
//             }
//             if(mpp.find(nums2[i]) == mpp.end()) mpp[nums2[i]] = -1;
//         }
//         vector<int> ans;
//         for(int i=0;i<nums1.size();i++){
//             ans.push_back(mpp[nums1[i]]);
//         }
//         return ans;
//     }
// };


// monotonic stack approach
// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int> nextgreat;
//         vector<int> ans;
//         stack<int> mono_st;
//         for(int i=nums2.size()-1;i>=0;i--){
//             while(!mono_st.empty() && nums2[i]>mono_st.top()){
//                 mono_st.pop();
//             }
//             if(mono_st.empty()){
//                 nextgreat[nums2[i]] = -1;
//             }
//             else{
//                 nextgreat[nums2[i]] = mono_st.top();
//             }
//             mono_st.push(nums2[i]);
//         }
//         for(int i=0;i<nums1.size();i++){
//             ans.push_back(nextgreat[nums1[i]]);
//         }
//         return ans;
//     }
// };