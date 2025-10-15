// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size(), k=1;
        vector<int> arr(n,1);
        for (int i=1; i<n; i++) if (nums[i]>nums[i-1]) arr[i] = arr[i-1]+1;
        for (int i=0; i<nums.size()-k; i++) {
            while (i<nums.size() && (i+k)<nums.size() && arr[i]>=k && arr[i+k]>=k) k++;
        } 
        return k-1;
    }
};
