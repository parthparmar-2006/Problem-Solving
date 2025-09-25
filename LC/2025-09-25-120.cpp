// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mem(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>& dp) {
        int n = triangle.size();
        // if (j>i) return INT_MAX;
        if (i==(n-1)) return triangle[i][j];
        if (dp[i][j] != INT_MAX) return dp[i][j];
        return dp[i][j] = triangle[i][j] + min(mem(i+1, j, triangle, dp), mem(i+1, j+1, triangle, dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        return mem(0, 0, triangle, dp);
    }
};
