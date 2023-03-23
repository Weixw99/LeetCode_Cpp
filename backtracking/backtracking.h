//
// Created by wxw on 23-3-23.
//

#ifndef LEETCODE_CPP_BACKTRACKING_H
#define LEETCODE_CPP_BACKTRACKING_H
#include <iostream>
using namespace std;
#include "vector"

/*******77. 组合********/
class Solution77 {
public:
    vector<vector<int>> result; // 存放符合条件结果的集合
    vector<int> path; // 用来存放符合条件结果
    vector<vector<int>> combine(int n, int k);
    void backtracking(int n, int k, int startIndex);
};
/*******216.组合总和III********/
class Solution216 {
public:
    vector<vector<int>> result; // 存放符合条件结果的集合
    vector<int> num; // 用来存放符合条件结果
    vector<vector<int>> combinationSum3(int k, int n);
    void backtracking(int k, int n, int startIndex);
};
/*******17.电话号码的字母组合********/

/*******39. 组合总和********/

/*******40.组合总和II********/

/*******131.分割回文串********/

/*******93.复原IP地址********/

/*******78.子集********/

/*******90.子集II********/

/*******491.递增子序列********/

/*******46.全排列********/

/*******47.全排列 II********/

/*******332.重新安排行程********/

/*******51. N皇后********/

/*******37. 解数独********/



#endif //LEETCODE_CPP_BACKTRACKING_H
