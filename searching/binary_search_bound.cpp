#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,3,4,5,7,9,10,15,18};
    int target = 6;
    int l = 0;
    int r = nums.size() - 1;
    int mid = -1;
    // int lower_bound = -1;
    // while(l <= r){
    //     mid = l+(r-l)/2;
    //     if(nums[mid] > target) r=mid-1;
    //     else{
    //         lower_bound = nums[mid];
    //         l=mid+1;
    //     }
    // }
    // l = 0;
    // r = nums.size() - 1;
    // mid = -1;
    // int upper_bound = -1;
    // while(l <= r){
    //     mid = l+(r-l)/2;
    //     if(nums[mid] < target) l=mid+1;
    //     else{
    //         upper_bound = nums[mid];
    //         r=mid-1;;
    //     }
    // }
    // cout<<"Lower bound is: "<<lower_bound<<endl;
    // cout<<"Upper bound is: "<<upper_bound;

    while(l <= r){
        mid = l+(r-l)/2;
        if(nums[mid] > target) r=mid-1;
        else if(nums[mid] < target) l=mid+1;
        else{
            break;
        }
    }
    cout<<"Lower bound is: "<<nums[r]<<endl;
    cout<<"Upper bound is: "<<nums[l];
    return 0;
}