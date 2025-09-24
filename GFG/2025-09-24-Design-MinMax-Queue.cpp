// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class SpecialQueue {

  public:
    deque<int> dq;
    int maxi = -1;
    int mini = INT_MAX;
    void enqueue(int x) {
        dq.push_back(x);
        maxi = max(maxi,x);
        mini = min(mini,x);
    }

    void dequeue() {
        dq.pop_front();
        maxi = -1;
        mini = INT_MAX;
        for(auto it = dq.begin();it!=dq.end();it++)
        {
            maxi = max(maxi, *it);
            mini = min(mini, *it);
        }
    }

    int getFront() {
        return dq.front();
    }

    int getMin() {
        return mini;
    }

    int getMax() {
        return maxi;
    }
};
