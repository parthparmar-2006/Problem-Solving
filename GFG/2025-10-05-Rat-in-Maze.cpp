// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<pair<int, int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
    vector<char> d = {'R', 'D', 'L', 'U'};
    void dfs(int i, int j, int n, string curr, vector<vector<int>>& maze, vector<vector<bool>>& vis, vector<string>& res) {
        if (i==(n-1) && j==(n-1)) {
            res.push_back(curr);
            return;
        }
        for (int k=0; k<d.size(); k++) {
            int x = i+dirs[k].first;
            int y = j+dirs[k].second;
            if (x>=0 && y>=0 && x<n && y<n && !vis[x][y] && maze[x][y]==1) {
                vis[i][j] = true;
                dfs(x, y, n, curr+d[k], maze, vis, res);
                vis[i][j] = false;
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> res;
        int n = maze.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        if (maze[0][0]==1) {
            vis[0][0] = true;
            dfs(0, 0, n, "", maze, vis, res);
        }
        sort(res.begin(), res.end());
        return res;
    }
};
