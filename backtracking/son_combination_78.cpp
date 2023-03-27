//
// Created by wxw on 23-3-27.
//
#include "backtracking.h"

void Solution78::backtracking(vector<int> nums, int startIndex){
    result.push_back(path);
    for(int i = startIndex;i < nums.size();i++){
        path.push_back(nums[i]);
        backtracking(nums, i+1);
        path.pop_back();
    }
}

vector<vector<int>> Solution78::subsets(vector<int> &nums) {
    backtracking(nums, 0);
    return result;

}