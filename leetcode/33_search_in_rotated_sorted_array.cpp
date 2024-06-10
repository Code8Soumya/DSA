#include<bits/stdc++.h>
using namespace std;

// int find_pivot(vector<int> &nums, int n){
//     int l = 0;
//     int r = n-1;
//     int mid;
//     while(l <= r){
//         mid = l+(r-l)/2;
//         if((mid == n-1) && (nums[mid] < nums[mid-1])) return mid;
//         else if((mid == 0) && (nums[mid] > nums[mid+1])) return mid+1;
//         else if((nums[mid] < nums[mid+1]) && (nums[mid] < nums[mid-1])) return mid;
//         else if((nums[mid] > nums[mid+1]) && (nums[mid] > nums[mid-1])) return mid+1;
//         else if(nums[mid] > nums[n-1]) l=mid+1;
//         else r=mid-1;
//     }
//     return -1;
// }
int find_pivot(vector<int> &nums, int n){
    int l = 0;
    int r = n-1;
    int mid = -1;
    while(l <= r){
        mid = l+(r-l)/2;
        if((nums[mid] <= nums[n-1]) && (nums[mid] < nums[mid-1])) return mid;
        else if((nums[mid] >= nums[n-1]) && (nums[mid] > nums[mid+1])) return mid+1;
        else if((nums[mid] <= nums[n-1]) && (nums[mid] > nums[mid-1])) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int b_search(vector<int> &nums, int l, int r, int target){
    int mid = -1;
    while(l <= r){
        mid = l+(r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int search(vector<int>& nums, int target) {
    int n = nums.size();
    if(n == 1 && nums[0] == target) return 0;
    else if(n == 1) return -1;
    int small_pivot_idx = -1;
    int out = -1;
    if(nums[0] > nums[n-1]){    // checking rotated or not (nums[0] > nums[n-1])
        small_pivot_idx = find_pivot(nums, n);
        if((target >= nums[0]) && target <= (nums[small_pivot_idx-1])){
            out = b_search(nums, 0, small_pivot_idx-1, target);
        }
        else if((target <= nums[n-1]) && target >= (nums[small_pivot_idx])){
            out = b_search(nums, small_pivot_idx, n-1, target);
        }
    }
    else{
        out = b_search(nums,0, n-1, target);
    }
    return out;
}

int main(){
    vector<int> v = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(v, 0);
    return 0;
}


// leetcode

// class Solution {
// public:
//     // int find_pivot(vector<int> &nums, int n){
//     //     int l = 0;
//     //     int r = n-1;
//     //     int mid;
//     //     while(l <= r){
//     //         mid = l+(r-l)/2;
//     //         if((mid == n-1) && (nums[mid] < nums[mid-1])) return mid;
//     //         else if((mid == 0) && (nums[mid] > nums[mid+1])) return mid+1;
//     //         else if((nums[mid] < nums[mid+1]) && (nums[mid] < nums[mid-1])) return mid;
//     //         else if((nums[mid] > nums[mid+1]) && (nums[mid] > nums[mid-1])) return mid+1;
//     //         else if(nums[mid] > nums[n-1]) l=mid+1;
//     //         else r=mid-1;
//     //     }
//     //     return -1;
//     // }
//     int find_pivot(vector<int> &nums, int n){
//         int l = 0;
//         int r = n-1;
//         int mid = -1;
//         while(l <= r){
//             mid = l+(r-l)/2;
//             if((nums[mid] <= nums[n-1]) && (nums[mid] < nums[mid-1])) return mid;
//             else if((nums[mid] >= nums[n-1]) && (nums[mid] > nums[mid+1])) return mid+1;
//             else if((nums[mid] <= nums[n-1]) && (nums[mid] > nums[mid-1])) r=mid-1;
//             else l=mid+1;
//         }
//         return -1;
//     }
//     int b_search(vector<int> &nums, int l, int r, int target){
//         int mid = -1;
//         while(l <= r){
//             mid = l+(r-l)/2;
//             if(nums[mid] == target) return mid;
//             else if(nums[mid] > target) r=mid-1;
//             else l=mid+1;
//         }
//         return -1;
//     }
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         if(n == 1 && nums[0] == target) return 0;
//         else if(n == 1) return -1;
//         int small_pivot_idx = -1;
//         int out = -1;
//         if(nums[0] > nums[n-1]){    // checking rotated or not (nums[0] > nums[n-1])
//             small_pivot_idx = find_pivot(nums, n);
//             if((target >= nums[0]) && target <= (nums[small_pivot_idx-1])){
//                 out = b_search(nums, 0, small_pivot_idx-1, target);
//             }
//             else if((target <= nums[n-1]) && target >= (nums[small_pivot_idx])){
//                 out = b_search(nums, small_pivot_idx, n-1, target);
//             }
//         }
//         else{
//             out = b_search(nums,0, n-1, target);
//         }
//         return out;
//     }
// };