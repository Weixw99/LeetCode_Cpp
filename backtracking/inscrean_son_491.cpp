//
// Created by wxw on 23-3-28.
//
#include "backtracking.h"

void Solution491::backtracking(vector<int> nums, int startIndex) {
    unordered_set<int> used;
    if(path.size() >= 2){
        result.push_back(path);
    }
    for(int i = startIndex;i < nums.size();i++){
        if(used.find(nums[i]) != used.end() || (!path.empty() && path.back() > nums[i])) continue;
        used.insert(nums[i]);
        path.push_back(nums[i]);
        backtracking(nums, i+1);
        path.pop_back();
    }
}

vector<vector<int>> Solution491::findSubsequences(vector<int> &nums) {
    backtracking(nums, 0);
    return result;


}

