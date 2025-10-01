// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int leftover = 0;
        int operations = 0;
        operations += numBottles;
        do {
            leftover = numBottles%numExchange;
            numBottles /= numExchange;
            operations+=numBottles;
            numBottles += leftover;
        } while (numBottles >= numExchange);
        return operations;
    }
};
