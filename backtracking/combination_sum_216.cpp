//
// Created by wxw on 23-3-23.
//
#include "backtracking.h"

void Solution216::backtracking(int k, int n, int startIndex) {
    if(num.size() == k){

        for(auto nn : num){
            n -= nn;
        }if(n == 0){
            result.push_back(num);
        }
        return;
    }
    for(int i = startIndex;i <= 9;i++){
        num.push_back(i);
        backtracking(k, n, i+1);
        num.pop_back();
    }
}

vector<vector<int>> Solution216::combinationSum3(int k, int n) {
    backtracking(k, n, 1);
    return result;
}