// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void backtrack(int i, int n, int k, vector<int>& temp, vector<vector<int>>& res) {
        if (temp.size()==k && n==0) {
            res.push_back(temp);
            return;
        }
        if (temp.size()==k) return;
        for (int j=i+1; j<=9; j++) {
            if (n>=j) {
                temp.push_back(j);
                backtrack(j, n-j, k, temp, res);
                temp.pop_back();
            } else break;
        }
    }
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<int> temp;
        vector<vector<int>> res;
        backtrack(0, n, k, temp, res);
        return res;
    }
};
