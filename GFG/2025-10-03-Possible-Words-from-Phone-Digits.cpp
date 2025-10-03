// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void backtrack(int i, vector<int>& arr, unordered_map<int, string>& mp, vector<string>& res, string& temp) {
        if (i==arr.size()) {
            res.push_back(temp);
            return;
        }
        if (arr[i]==0||arr[i]==1) backtrack(i+1, arr, mp, res, temp);
        for (auto ch: mp[arr[i]]) {
            temp.push_back(ch);
            backtrack(i+1, arr, mp, res, temp);
            temp.pop_back();
        } 
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        unordered_map<int, string> mp{{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        vector<string> res;
        string temp;
        backtrack(0, arr, mp, res, temp);
        return res;
    }
};
