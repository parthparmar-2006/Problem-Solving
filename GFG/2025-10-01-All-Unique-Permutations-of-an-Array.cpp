// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(vector<int>& temp, vector<vector<int>>& res, vector<int>& arr, vector<bool>& vis) {
        if (temp.size()==arr.size()) {
            res.push_back(temp);
            return;
        }
        for (int j=0; j<arr.size(); j++) {
            if (j>0 && arr[j]==arr[j-1] && !vis[j-1]) continue;
            if (!vis[j]) {
                temp.push_back(arr[j]);
                vis[j] = true;
                dfs(temp, res, arr, vis);
                vis[j] = false;
                temp.pop_back();
            }
        } 
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        vector<bool> vis(arr.size(), false);
        vector<vector<int>> res;
        vector<int> temp;
        dfs(temp, res, arr, vis);
        return res;
    }
};
