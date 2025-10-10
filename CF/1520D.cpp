// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for (int i=0; i<n; i++) {
            int p;
            cin >> p;
            mp[p-i]++;
        }
        long long cnt = 0;
        for (auto i: mp) {
            cnt += (long long)(i.second)*(i.second-1)/2;
        } cout << cnt << endl;
    }
    

    return 0;
}
