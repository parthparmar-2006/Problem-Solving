// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<bool>> pac(n, vector<bool>(m, false));
        vector<vector<bool>> atl(n, vector<bool>(m, false));
        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        
        auto bfs = [&](queue<pair<int,int>>& q, vector<vector<bool>>& ocean) {
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : dirs) {
                    int nx = x + dx, ny = y + dy;
                    if (nx >= 0 && ny >= 0 && nx < n && ny < m 
                        && !ocean[nx][ny] 
                        && heights[nx][ny] >= heights[x][y]) {
                        ocean[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        };
        
        queue<pair<int,int>> qPac, qAtl;
        for (int i = 0; i < n; i++) {
            qPac.push({i, 0}); pac[i][0] = true;
            qAtl.push({i, m-1}); atl[i][m-1] = true;
        }
        for (int j = 0; j < m; j++) {
            qPac.push({0, j}); pac[0][j] = true;
            qAtl.push({n-1, j}); atl[n-1][j] = true;
        }
        
        bfs(qPac, pac);
        bfs(qAtl, atl);
        
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (pac[i][j] && atl[i][j]) {
                    res.push_back({i, j});
                }
            }
        }
        return res;
    }
};
