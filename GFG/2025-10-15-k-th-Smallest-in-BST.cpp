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
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool helper(Node* root, int& k, int& ans) {
        if (!root) return false;
        if (k==0 || helper(root->left, k, ans)) return true;
        ans = root->data;
        k--;
        if (k==0 || helper(root->right, k, ans)) return true;
        return false;
    }
    int kthSmallest(Node *root, int k) {
        // code here
        int ans=-1, cnt=k;
        helper(root, cnt, ans);
        if (cnt>0) return -1;
        return ans;
    }
};
