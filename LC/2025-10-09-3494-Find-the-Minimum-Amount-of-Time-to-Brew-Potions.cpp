// Author: Parth Parmar
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        vector<long long> prefix(skill.size());
        prefix[0]=0;
        for(int i=1;i<skill.size();i++){
            prefix[i]=prefix[i-1]+skill[i-1];
        }
        long long start=0;
        long long nextstart=0;
        for(int i=0;i<mana.size();i++){
            start=nextstart;
            for(int j=0;j<skill.size();j++){
                start+=skill[j]*mana[i];
                if(i!=mana.size()-1){
                    long long x=start-prefix[j]*mana[i+1];
                    nextstart=max(nextstart,x);
                }
            }
        }
        return start;
    }
};
