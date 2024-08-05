// leetcode

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {

//         int pivot = -1;
//         int n = nums.size();
//         int greater_than_pivot;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i] < nums[i+1]){
//                 pivot = i;
//                 break;
//             }
//         }

//         if(pivot == -1) {
//             reverse(nums.begin(),nums.end());
//             return;
//         }

//         reverse(nums.begin()+pivot+1,nums.end());   
//         // TIPS : reverse(begin_number_included,end_number_included)

//         for(int i=pivot+1;i<n;i++){
//             if(nums[i] > nums[pivot]){
//                 greater_than_pivot = i;
//                 break;
//             }
//         }

//         swap(nums[pivot],nums[greater_than_pivot]);
//     }
// };