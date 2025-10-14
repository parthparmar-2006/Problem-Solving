// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool helper(Node* root, int l, int r, int& sum) {
        if (!root) return false;
        if (helper(root->left, l, r, sum)) return true;
        if (root->data>=l && root->data<=r) sum += root->data;
        if (helper(root->right, l, r, sum)) return true;
        return false;
    };
    int nodeSum(Node* root, int l, int r) {
        // code here
        int sum=0;
        helper(root, l, r, sum);
        return sum;
    }
};
