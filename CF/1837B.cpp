// Author: Parth Parmar
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int curr=1, mini=1;
        for (int i=1; i<n; i++) {
            if (s[i]==s[i-1]) curr++;
            else curr=1;
            mini = max(mini, curr);
        }
        cout << mini+1 << endl;
    }

    return 0;
}
