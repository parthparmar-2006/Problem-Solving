// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0;                  
        for (int i = 0; i < n - 2; ++i) {
            int k = i + 2;                  
            for (int j = i + 1; j < n - 1; ++j) {
                while (k < n && (long long)nums[i] + nums[j] > nums[k]) ++k;
                cnt += max(0, k-j-1);
            }
        }
        return cnt;                     
    }
};
