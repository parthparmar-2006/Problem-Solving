// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxArea(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> arr(n, 0);
        int maxi = 0;

        for (int row = 0; row < m; row++) {
            for (int j = 0; j < n; j++) {
                if (mat[row][j] == 1) arr[j]++;
                else arr[j] = 0;
            }

            vector<int> nge(n), pge(n);
            stack<int> st;
            for (int i = n - 1; i >= 0; i--) {
                while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
                nge[i] = st.empty() ? n : st.top();
                st.push(i);
            }
            while (!st.empty()) st.pop();
            for (int i = 0; i < n; i++) {
                while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
                pge[i] = st.empty() ? -1 : st.top();
                st.push(i);
            }

            for (int i = 0; i < n; i++) {
                int area = arr[i] * (nge[i] - pge[i] - 1);
                maxi = max(maxi, area);
            }
        }
        return maxi;
    }
};
