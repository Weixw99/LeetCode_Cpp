//
// Created by wxw on 23-3-25.
//
#include "backtracking.h"

void Solution40::backtracking(vector<int> &candidates, int target, int startIndex) {
    if(target == 0){
        result.push_back(path);
        return;
    }
    for(int i = startIndex;i < candidates.size();i++){
        if(target - candidates[i] < 0) continue;
        if (i > startIndex && candidates[i] == candidates[i - 1]) {
            continue;
        }
        path.push_back(candidates[i]);
        target -= candidates[i];
        backtracking(candidates, target, i+1);
        path.pop_back();
        target += candidates[i];
    }
}

vector<vector<int>> Solution40::combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    backtracking(candidates,target,0);
    return result;


}