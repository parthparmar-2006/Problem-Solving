// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> res(n, -1);
        unordered_map<int, int> mp; 
        set<int> dry; 

        for (int i = 0; i < n; i++) {
            if (rains[i] == 0) {
                dry.insert(i); 
                res[i] = 1; 
            } else {
                int lake = rains[i];
                if (mp.count(lake)) {
                    int prev = mp[lake];
                    auto it = dry.upper_bound(prev); 
                    if (it == dry.end()) return {}; 
                    res[*it] = lake; 
                    dry.erase(it); 
                }
                mp[lake] = i;
            }
        }
        return res;
    }
};
