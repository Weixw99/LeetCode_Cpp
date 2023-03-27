//
// Created by wxw on 23-3-27.
//
#include "backtracking.h"

void Solution90::backtracking(vector<int> nums, int startIndex) {
    result.push_back(path);
    for(int i = startIndex;i < nums.size();i++){
        if(i > startIndex && nums[i] == nums[i-1]) continue;
        path.push_back(nums[i]);
        backtracking(nums, i+1);
        path.pop_back();
    }
}

vector<vector<int>> Solution90::subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    backtracking(nums, 0);
    return result;
}