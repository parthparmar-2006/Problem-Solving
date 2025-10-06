#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int prev=0, win=n, los=0, cnt=0;
        while (win>1 || los>1) {
            int temp = win/2;
            cnt += win/2;
            cnt += los/2;
            if (win%2==1) win++;
            win /= 2;
            if (los%2==1) los++;
            los /= 2;
            los += temp;
            prev = temp;
        } 
        cout << cnt+1 << endl;
    }

    return 0;
}
