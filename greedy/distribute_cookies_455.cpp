//
// Created by wxw on 23-3-29.
//
# include "greedy.h"

int Solution455::findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int index = s.size() - 1; // 饼干数组的下标
    int result = 0;
    for(int i = g.size()-1;i >= 0;i--){
        if(index >= 0 && s[index] >= g[i]){
            index--;
            result++;
        }
    }
    return result;
}