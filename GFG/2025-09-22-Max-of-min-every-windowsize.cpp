// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        stack<int> st;
        vector<int> nse(n), pse(n);
        for (int i=0; i<n; i++) {
            while (!st.empty() && arr[st.top()]>=arr[i]) {
                st.pop();
            }
            pse[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && arr[st.top()]>=arr[i]) {
                st.pop();
            }
            nse[i] = st.empty()? n: st.top();
            st.push(i);
        }
        vector<int> res(n, 0);
        for (int i=0; i<n; i++) {
            int len = nse[i]-pse[i]-1;
            res[len-1] = max(res[len-1], arr[i]);
        }
        for (int i=n-2; i>=0; i--) {
            res[i] = max(res[i], res[i+1]);
        } return res;
    }
};