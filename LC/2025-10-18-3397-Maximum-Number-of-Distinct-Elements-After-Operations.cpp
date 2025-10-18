// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int start = nums[0]-k, cnt=0;

        for (int i = 0; i < nums.size(); i++) {
            int temp = max(nums[i] - k, start);
            if (temp <= nums[i] + k) {
                cnt++;
                start = temp + 1;
            }
        }
        return cnt;
    }
};
