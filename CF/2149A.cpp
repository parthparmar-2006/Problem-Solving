// Author: Parth Parmar
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int no=0, z=0;
        for (int i=0; i<n; i++) {
            int p;
            cin >> p;
            if (p==-1) no++;
            if (p==0) z++;
        }
        if (no%2==1) z+=2;
        cout << z << endl;
    }
    return 0;
}
