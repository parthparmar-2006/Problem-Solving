// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int helper(Node* root, int& maxi) {
        if (!root) return 0;
        int ls = max(0, helper(root->left, maxi));
        int rs = max(0, helper(root->right, maxi));
        maxi = max(maxi, root->data+ls+rs);
        return root->data+max(ls, rs);
    }
    int findMaxSum(Node *root) {
        // code here
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi;
    }
};
