//
// Created by wxw on 23-3-23.
//

#ifndef LEETCODE_CPP_BACKTRACKING_H
#define LEETCODE_CPP_BACKTRACKING_H
#include <iostream>
using namespace std;
#include "vector"
#include<algorithm>
#include "unordered_set"

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
class Solution17 {
public:
    vector<string> ward = { "", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",};
    vector<string> result;
    string path;
    vector<string> letterCombinations(string digits);
    void backtracking(string digits, int startIndex);
};
int make_main17();
/*******39. 组合总和********/
class Solution39 {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);
    void backtracking(vector<int> &candidates, int target, int startIndex);
};
int make_main39();
/*******40.组合总和II********/
class Solution40 {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
    void backtracking(vector<int> &candidates, int target, int startIndex);
};
/*******131.分割回文串********/
class Solution131 {
public:
    vector<vector<string>> result;
    vector<string> path;
    vector<vector<string>> partition(string s);
    void backtracking(string s, int startIndex);
};
/*******93.复原IP地址********/
class Solution93 {
public:
    vector<string> result;
    vector<string> path;
    vector<string> restoreIpAddresses(string s);
    void backtracking(string s, int startIndex);
};
int make_main93();
/*******78.子集********/
class Solution78 {
public:
    vector<vector<int>>  result;
    vector<int> path;
    vector<vector<int>> subsets(vector<int>& nums);
    void backtracking(vector<int> nums, int startIndex);
};
/*******90.子集II********/
class Solution90 {
public:
    vector<vector<int>>  result;
    vector<int> path;
    vector<vector<int>> subsetsWithDup(vector<int>& nums);
    void backtracking(vector<int> nums, int startIndex);
};
/*******491.递增子序列********/
class Solution491 {
public:
    vector<vector<int>>  result;
    vector<int> path;
    vector<vector<int>> findSubsequences(vector<int>& nums);
    void backtracking(vector<int> nums, int startIndex);
};
/*******46.全排列********/
class Solution46 {
public:
    vector<vector<int>>  result;
    vector<int> path;
    vector<vector<int>> permute(vector<int>& nums);
    void backtracking(vector<int> nums, vector<bool> used);
};
/*******47.全排列 II********/
class Solution47 {
public:
    vector<vector<int>>  result;
    vector<int> path;
    vector<vector<int>> permuteUnique(vector<int>& nums);
    void backtracking(vector<int> nums, vector<bool> used);
};
/*******332.重新安排行程********/
class Solution332 {
public:
    vector<vector<string>>  result;
    vector<string> path;
    vector<string> findItinerary(vector<vector<string>>& tickets);
    void backtracking(vector<vector<string>> tickets, vector<bool> used);
};
int make_main332();
/*******51. N皇后********/
class Solution51{
public:
    vector<vector<string>> solveNQueens(int n);
};
/*******37. 解数独********/
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board);
};


#endif //LEETCODE_CPP_BACKTRACKING_H
