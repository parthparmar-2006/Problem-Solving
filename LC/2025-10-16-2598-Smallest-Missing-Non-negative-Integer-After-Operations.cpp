// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> mp;
        int cnt=0, temp=0;
        for (int i: nums) {
            mp[((i%value + value)%value)]++;
        }
        while (true) {
            if (mp[temp]--==0) break;
            temp = (temp+1)%value;
            cnt++;
        } return cnt;
    }
};
