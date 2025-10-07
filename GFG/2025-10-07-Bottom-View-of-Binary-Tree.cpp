// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int> res;
        if (!root) return res;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto node = q.front();
            q.pop();
            if (node.first->left) q.push({node.first->left, node.second-1});
            if (node.first->right) q.push({node.first->right, node.second+1});
            mp[node.second] = node.first->data;
        } 
        for (auto i: mp) res.push_back(i.second);
        return res;
    }
};
