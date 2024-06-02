#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,1,1,1,2,3,6,7,8,9};
    vector<int> out;
    int x = 4;
    int k = 9;
    int n = arr.size();
    if(x <= arr[0]){
        for(int i=0;i<k;i++) out.push_back(arr[i]);
        // return out;
    }
    if(x >= arr[n-1]){
        for(int i=n-k;i<n;i++) out.push_back(arr[i]);
        // return out;
    }
    int l = 0;
    int h = n-1;
    int mid = -1;
    while(l <= h){
        mid = l+(h-l)/2;
        if(arr[mid] == x){
            out.push_back(x);
            k--;
            l = mid-1;
            h = mid+1;
            break;
        }
        else if(arr[mid] > x) h=mid-1;
        else l=mid+1;
    }
    // cout<<arr[mid]<<" "<<x<<endl;
    if(arr[mid] != x) swap(l, h);
    while(k >= 1){
        if(l<0 || h>n-1) break;
        if(abs(x-arr[l]) <= abs(x-arr[h])){
            out.push_back(arr[l]);
            l--;
        }
        else{
            out.push_back(arr[h]);
            h++;
        }
        k--;
    }
    if(k >= 1){
        if(l >= 0){
            while(k >= 1){
                out.push_back(arr[l]);
                l--;
                k--;
            }
        }
        else if(h <= n-1){
            while(k >= 1){
                out.push_back(arr[h]);
                h++;
                k--;
            }
        }
    }
    sort(out.begin(), out.end());
    for(auto it=out.begin();it!=out.end();it++){
        cout<<*(it)<<" ";
    }
    return -1;
}


// leetcode 

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//        vector<int> out;
//         int n = arr.size();
//         if(x <= arr[0]){
//             for(int i=0;i<k;i++) out.push_back(arr[i]);
//             return out;
//         }
//         if(x >= arr[n-1]){
//             for(int i=n-k;i<n;i++) out.push_back(arr[i]);
//             return out;
//         }
//         int l = 0;
//         int h = n-1;
//         int mid = -1;
//         while(l <= h){
//             mid = l+(h-l)/2;
//             if(arr[mid] == x){
//                 out.push_back(x);
//                 l = mid-1;
//                 h = mid+1;
//                 k--;
//                 break;
//             }
//             else if(arr[mid] > x) h=mid-1;
//             else l=mid+1;
//         }
//         if(arr[mid] != x) swap(l, h);
//         while(k >= 1){
//             if(l<0 || h>n-1) break;
//             if(abs(x-arr[l]) <= abs(x-arr[h])){
//                 out.push_back(arr[l]);
//                 l--;
//             }
//             else{
//                 out.push_back(arr[h]);
//                 h++;
//             }
//             k--;
//         }
//         if(k >= 1){
//             if(l >= 0){
//                 while(k >= 1){
//                     out.push_back(arr[l]);
//                     l--;
//                     k--;
//                 }
//             }
//             else if(h <= n-1){
//                 while(k >= 1){
//                     out.push_back(arr[h]);
//                     h++;
//                     k--;
//                 }
//             }
//         }
//         sort(out.begin(), out.end());
//         return out;
//     }
// };