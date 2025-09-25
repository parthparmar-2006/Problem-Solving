// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        if (type==1) {
            while (k>0) {
                dq.push_front(dq.back());
                dq.pop_back();
                k--;
            }
        } else {
            while (k>0) {
                dq.push_back(dq.front());
                dq.pop_front();
                k--;
            }
        } 
    }
};
