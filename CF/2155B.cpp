// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> arr(n, vector<char>(n, '!'));
        if (((n*n)-k)==1) cout << "no" << endl;
        else {
            cout << "yes" << endl;
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    if (k==0) break;
                    arr[j][i] = 'U';
                    k--;
                }
            }
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    if (arr[i][j]=='!') {
                        if (j!=(n-1)) {
                            arr[i][j] = 'R';
                        } else {
                            arr[i][j] = 'D';
                        }
                        if (i==(n-1) && j==(n-1)) {
                            arr[i][j] = 'U';
                        }
                    }
                    cout << arr[i][j];
                } cout << endl;
            }
        } 
    }

    return 0;
}
