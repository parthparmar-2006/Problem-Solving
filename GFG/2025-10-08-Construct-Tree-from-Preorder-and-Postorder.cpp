// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* buildTree(int i1, int i2, int j1, int j2, unordered_map<int, int>& mp, vector<int>& preorder) {
        if (i1>i2 || j1>j2) return nullptr;
        Node* root = new Node(preorder[i1]);
        if (i1!=i2) {
            int mid = mp[preorder[i1+1]];
            int size = mid-j1+1;
            root->left = buildTree(i1+1, i1+size, j1, mid, mp, preorder);
            root->right = buildTree(i1+size+1, i2, mid+1, j2-1, mp, preorder);
        } return root;
    }
    Node *constructTree(vector<int> &preorder, vector<int> &postorder) {
        // code here
        int n = preorder.size();
        unordered_map<int, int> mp;
        for (int i=0; i<postorder.size(); i++) {
            mp[postorder[i]] = i;
        }
        return buildTree(0, n-1, 0, n-1, mp, preorder);
    }
};
