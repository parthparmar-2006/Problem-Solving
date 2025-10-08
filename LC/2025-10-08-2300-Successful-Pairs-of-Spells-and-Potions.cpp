// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& potions, int spell, long long success) {
        int start=0, end=potions.size()-1, ans=-1;
        while (start<=end) {
            int mid = start+(end-start)/2;
            long long key = (long long)potions[mid]*spell;
            if (key<success) {
                ans = mid;
                start = mid+1;
            } else end = mid-1;
        } return ans;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), p = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> res(n);
        for (int i=0; i<n; i++) {
            res[i] = p-(bs(potions, spells[i], success)+1);
        } return res;
    }
};
