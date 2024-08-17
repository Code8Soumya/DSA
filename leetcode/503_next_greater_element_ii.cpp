// leetcode


// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {

//         monotonic stack O(2*N)
//         int n = nums.size();
//         vector<int> ans(n, -1);
//         stack<int> st;
//         for(int i=(2*n-1);i>=0;i--){
//             while(!st.empty() && nums[i%n]>=st.top()) st.pop();
//             if(i<n){
//                 if(!st.empty()) ans[i] = st.top();
//             }
//             st.push(nums[i%n]);
//         }
//         return ans;
        
//         circular array brute force O(N^2)
//         int n = nums.size();
//         vector<int> ans(n, -1);
//         int idx = -1;
//         for(int i=0 ; i<n ; i++){
//             for(int j=i+1 ; j<i+n ; j++){
//                 idx = j%n;
//                 if(nums[idx] > nums[i]){
//                     ans[i] = nums[idx];
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };