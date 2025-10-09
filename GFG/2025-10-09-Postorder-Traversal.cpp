// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void helper(Node* root, vector<int>& res) {
        if (!root) return;
        if (root->left) helper(root->left, res);
        if (root->right) helper(root->right, res);
        res.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> res;
        helper(root, res);
        return res;
    }
};
