#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    int l1 = nums1.size(), l2 = nums2.size(), i1=0, i2=0;
    vector<int> ans;
    while(i1 < l1 && i2 < l2){
        if(nums1[i1] < nums2[i2]) i1++;
        else if(nums1[i1] > nums2[i2]) i2++;
        else{
            ans.push_back(nums1[i1]);
            i1++;
            i2++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums1={1,1,2,2,2,3,3,4,5,6,6,6,7,7,7,8,8,9};
    vector<int> nums2={1,1,2,4,4,6,6,8,8,};
    vector<int> ans = intersection(nums1, nums2);
    for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<" ";
    return 0;
}