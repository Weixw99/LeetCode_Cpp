//
// Created by wxw on 23-3-28.
//
#include "backtracking.h"

void Solution47::backtracking(vector<int> nums, vector<bool> used) {
    unordered_set<int> used_layer;
    if(nums.size() == path.size()){
        result.push_back(path);
        return;
    }
    for(int i = 0;i < nums.size();i++){
        if(used[i] || used_layer.find(nums[i]) != used_layer.end()) continue;
        path.push_back(nums[i]);
        used[i] = true;
        used_layer.insert(nums[i]);
        backtracking(nums, used);
        used[i] = false;
        path.pop_back();
    }
}
vector<vector<int>> Solution47::permuteUnique(vector<int> &nums) {
    vector<bool> used(nums.size(), false);
    backtracking(nums, used);
    return result;
}

