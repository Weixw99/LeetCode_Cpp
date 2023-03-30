//
// Created by wxw on 23-3-30.
//
# include "greedy.h"

int Solution453::maxSubArray(vector<int> &nums) {
    int max_count = INT32_MIN;
    int count = 0;
    for(int i : nums){
        count += i;
        if(count > max_count) max_count = count;
        if(count < 0) count = 0;
    }
    return max_count;
}
