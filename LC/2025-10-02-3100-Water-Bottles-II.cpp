// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int cnt=numBottles;
        while ((numBottles-numExchange)>=0) {
            numBottles -= (numExchange-1);
            cnt++;
            numExchange++;
        } return cnt;
    }
};
