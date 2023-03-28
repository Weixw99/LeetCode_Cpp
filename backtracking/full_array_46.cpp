//
// Created by wxw on 23-3-28.
//
#include "backtracking.h"

void Solution46::backtracking(vector<int> nums, vector<bool> used) {
    if(nums.size() == path.size()){
        result.push_back(path);
        return;
    }
    for(int i = 0;i < nums.size();i++){
        if(used[i]) continue;
        path.push_back(nums[i]);
        used[i] = true;
        backtracking(nums, used);
        used[i] = false;
        path.pop_back();
    }
}

vector<vector<int>> Solution46::permute(vector<int> &nums) {
    vector<bool> used(nums.size(), false);
    backtracking(nums, used);
    return result;
}

