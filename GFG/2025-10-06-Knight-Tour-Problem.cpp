// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool dfs(int i, int j, int move, vector<pair<int, int>>& dirs, vector<vector<int>>& res) {
        int n = res.size();
        if (move==n*n) return true;
        for (auto d: dirs) {
            int x = i+d.first;
            int y = j+d.second;
            if (x>=0 && y>=0 && x<n && y<n && res[x][y]==-1) {
                res[x][y] = move;
                if (dfs(x, y, move+1, dirs, res)) return true;
                res[x][y] = -1;
            }
        } return false;
    }
    vector<vector<int>> knightTour(int n) {
        // code here
        vector<vector<int>> res(n, vector<int>(n, -1));
        vector<pair<int, int>> dirs = {{2,1},{1,2},{-2,1},{-1,2},{2,-1},{1,-2},{-1,-2},{-2,-1}};
        res[0][0] = 0;
        if (dfs(0, 0, 1, dirs, res)) return res;
        return {{-1}};
    }
};
