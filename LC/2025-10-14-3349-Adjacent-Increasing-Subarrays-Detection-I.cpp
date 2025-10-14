// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> arr(n,1);
        for (int i=1; i<n; i++) if (nums[i]>nums[i-1]) arr[i] = arr[i-1]+1;
        for (int i=0; i<nums.size()-k; i++) if (arr[i]>=k && arr[i+k]>=k) return true;
        return false;
    }
};
