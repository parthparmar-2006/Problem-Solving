#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        if (t%3==0) cout << 0 << endl;
        else cout << 3-t%3 << endl;
    }

    return 0;
} 
