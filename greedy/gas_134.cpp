//
// Created by wxw on 23-4-4.
//
# include "greedy.h"

int Solution134::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int curSum = 0;
    int totalSum = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++) {
        curSum += gas[i] - cost[i];
        totalSum += gas[i] - cost[i];
        if(curSum < 0){
            start = i + 1;
            curSum = 0;
        }
    }
    if(totalSum < 0) return -1;
    return start;
}

int make_main134(){
    vector<int> gas{2,3,4};
    vector<int> cost{3,4,3};
    Solution134 wxw;
    int me = wxw.canCompleteCircuit(gas, cost);
    cout << me;
    return 0;
}