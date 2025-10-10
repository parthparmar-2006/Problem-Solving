// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
        if (!root) return {};
        queue<Node*> q;
        q.push(root);
        vector<int> res;
        int level= 0;
        while (!q.empty()) {
            int size = q.size();
            vector<int> temp;
            for (int i=0; i<size; i++) {
                auto node = q.front();
                q.pop();
                temp.push_back(node->data);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (level%2==1) reverse(temp.begin(), temp.end());
            for (int i: temp) res.push_back(i);
            level++;
        } return res;
    }
};
