// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string par(string temp) {
    int n = temp.size()-1;
    while (n>=0 && temp[n]=='z') n--;
    if (n==-1) return string(temp.size()+1, 'a');
    temp[n] += 1;
    for (int i=n+1; i<temp.size(); i++) temp[i] = 'a';
    return temp;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string temp;
        while (true) {
            temp = par(temp);
            if (s.find(temp)==string::npos) {
                cout << temp << endl;
                break;
            }
        }
    }

    return 0;
}
