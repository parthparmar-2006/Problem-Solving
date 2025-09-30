// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void backtrack(int i, int num, string temp, vector<string>& res) {
        if (i==num) {
            res.push_back(temp);
            return;
        }
        temp.push_back('0');
        backtrack(i+1, num, temp, res);
        temp.pop_back();
        temp.push_back('1');
        backtrack(i+1, num, temp, res);
        temp.pop_back();
    }
    vector<string> binstr(int num) {
        // Write your code
        vector<string> res;
        backtrack(0, num, "", res);
        return res;
    }
};

