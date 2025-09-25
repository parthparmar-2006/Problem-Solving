// Author: Parth Parmar
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_set<int> st;
        int eq = 0;
        
        for (int i=0; i<n; i++) {
            int x; cin >> x;
            st.insert(x);
            if (x == k) eq++;
        }

        int op = 0;
        for (int i=0; i<k; i++) {
            if (!st.count(i)) op++;
        }

        cout << max(eq, op) << "\n";
    }
}
