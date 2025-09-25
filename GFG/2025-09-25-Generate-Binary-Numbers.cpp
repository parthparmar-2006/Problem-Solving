// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string> res;
        queue<string> q;
        q.push("1");
        while (n--) {
            
            string s1 = q.front();
            q.pop();
            res.push_back(s1);
    
            string s2 = s1; 
            
            if(q.size() < n) {
                q.push(s1.append("0"));
                q.push(s2.append("1"));
            }
        }
        return res;
    }
};
