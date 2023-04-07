//
// Created by wxw on 23-3-29.
//

#ifndef LEETCODE_CPP_GREEDY_H
#define LEETCODE_CPP_GREEDY_H
#include <iostream>
using namespace std;
#include "vector"
#include<algorithm>

/*******455.分发饼干********/
class Solution455 {
public:
    int findContentChildren(vector<int>& g, vector<int>& s);
};
/*******376. 摆动序列********/
class Solution376 {
public:
    int wiggleMaxLength(vector<int>& nums);
};
int make_main376();
/*******453. 最大子序和********/
class Solution453 {
public:
    int maxSubArray(vector<int>& nums);
};
/*******122.买卖股票的最佳时机II********/
class Solution122 {
public:
    int maxProfit(vector<int>& prices);
};
int make_main122();
/*******55. 跳跃游戏********/
class Solution55 {
public:
    bool canJump(vector<int>& nums);
};
int make_main55();
/*******45.跳跃游戏II********/
class Solution45 {
public:
    int jump(vector<int>& nums);
};
int make_main45();
/*******1005.K次取反后最大化的数组和********/
class Solution1005 {
public:
    static bool cmp(int a, int b) {return abs(a) > abs(b);}
    int largestSumAfterKNegations(vector<int>& nums, int k);
};
/*******134. 加油站********/
class Solution134 {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost);
};
int make_main134();
/*******135. 分发糖果********/
class Solution135 {
public:
    int candy(vector<int>& ratings);
};
/*******860.柠檬水找零********/
class Solution860 {
public:
    bool lemonadeChange(vector<int>& bills);
};
/*******406.根据身高重建队列********/
class Solution406 {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people);
};
/*******452. 用最少数量的箭引爆气球********/
class Solution452 {
public:
    int findMinArrowShots(vector<vector<int>>& points);
};
/*******435. 无重叠区间********/

/*******763.划分字母区间********/

/*******56. 合并区间********/

/*******738.单调递增的数字********/

/*******968.监控二叉树********/

#endif //LEETCODE_CPP_GREEDY_H
