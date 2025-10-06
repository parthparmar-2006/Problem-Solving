// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<pair<int, int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        pq.push({grid[0][0], {0, 0}});
        dist[0][0] = grid[0][0];
        while (!pq.empty()) {
            int dis = pq.top().first;
            pair<int, int> node = pq.top().second;
            pq.pop();
            for (auto j: dirs) {
                int x = j.first+node.first;
                int y = j.second+node.second;
                if (x>=0 && y>=0 && x<n && y<n && dist[x][y] > (max(dist[node.first][node.second], grid[x][y]))) {
                    dist[x][y] = max(dist[node.first][node.second], grid[x][y]);
                    pq.push({dist[x][y], {x, y}});
                }
            }
        } return dist[n-1][n-1];
    }
};
