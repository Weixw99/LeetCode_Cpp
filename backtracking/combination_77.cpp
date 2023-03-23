//
// Created by wxw on 23-3-23.
//
#include "backtracking.h"

void Solution77::backtracking(int n, int k, int startIndex) {
    if(path.size() == k){
        result.push_back(path);
        return;
    }
    for(int i = startIndex; i < n+1;i++){
        path.push_back(i);
        backtracking(n, k, i+1);
        path.pop_back();
    }
}

vector<vector<int>> Solution77::combine(int n, int k) {
    backtracking(n, k, 1);
    return result;

}