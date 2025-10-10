// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size(), maxi = INT_MIN;
        vector<int> temp(k, 0);
        for (int i=0; i<n; i++) {
            temp[i%k] += energy[i];
            if ((i+k)>=n) maxi = max(maxi, temp[i%k]);
            if (temp[i%k]<0) temp[i%k] = 0;
        } return maxi;
    }
};
