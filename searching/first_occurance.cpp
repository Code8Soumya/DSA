#include<bits/stdc++.h>
using namespace std;
int main(){          //{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} index
    vector<int> nums = {1,2,2,2,2,3,4,5,7,7,7, 7, 9, 10,15,18,20};
    int target = 2;
    int l = 0;
    int r = nums.size() - 1;
    int mid = -1;
    while(l <= r){
        mid = l+(r-l)/2;
        if(nums[mid] > target) r=mid-1;
        else if(nums[mid] < target) l=mid+1;
        else{
            if((mid == 0) || (nums[mid-1] != nums[mid])){
                cout<<"First occurance of "<<target<<" is at index "<<mid;
                break;
            }
            else r=mid-1;
        }
    }
    return 0;
}