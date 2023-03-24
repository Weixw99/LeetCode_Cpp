//
// Created by wxw on 23-3-24.
//
#include "backtracking.h"

void Solution17::backtracking(string digits, int startIndex) {
    if(path.size() == digits.size()){
        result.push_back(path);
        return;
    }
    string tmp = ward[digits[startIndex]-'0'];
    for(int i = 0;i <  tmp.size();i ++){
        path.push_back(tmp[i]);
        backtracking(digits, startIndex+1);
        path.pop_back();
    }
}

vector<string> Solution17::letterCombinations(string digits) {
    if(digits.size() == 0) return result;
    backtracking(digits, 0);
    return result;
}

int make_main17(){
    string digits = "23";
    Solution17 wxw;
    vector<string> me = wxw.letterCombinations(digits);
    return 0;
}