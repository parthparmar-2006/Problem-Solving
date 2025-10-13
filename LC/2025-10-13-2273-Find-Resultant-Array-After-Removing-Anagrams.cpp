// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string hash(string word) {
        vector<int> f(26, 0);
        for (auto ch: word) {
            f[ch-'a']++;
        }
        string s;
        for (int i: f) {
            s.push_back(i);
            s.push_back('#');
        } return s;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        res.push_back(words[0]);
        string prev = hash(words[0]);
        for (int i=1; i<words.size(); i++) {
            string temp = hash(words[i]);
            if (temp==prev) continue;
            res.push_back(words[i]);;
            prev = temp;
        } return res;
    }
};
