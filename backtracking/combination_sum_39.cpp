//
// Created by wxw on 23-3-24.
//
#include "backtracking.h"

void Solution39::backtracking(vector<int> &candidates, int target, int startIndex) {
    if(target == 0){
        result.push_back(path);
        return;
    }
    for(int i = startIndex;i < candidates.size();i++){
        if (target - candidates[i] < 0) continue;
        target -= candidates[i];
        path.push_back(candidates[i]);
        backtracking(candidates, target, i);
        target += candidates[i];
        path.pop_back();
    }

}

vector<vector<int>> Solution39::combinationSum(vector<int> &candidates, int target) {
    backtracking(candidates,target,0);
    return result;


}
int make_main39(){
    vector<int> candidates{2,3,6,7};
    Solution39 wxw;
    vector<vector<int>> me = wxw.combinationSum(candidates, 7);
    return 0;
}

