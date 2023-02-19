#ifndef LEETCODE_ARRAY_H  //如果没有定义这个，那就往下执行
#define LEETCODE_ARRAY_H  //定义一下

#include <iostream>
#include <vector>
using namespace std;


/*******209、长度最小的子数组********/
class Solution209 {
public:
    int minSubArrayLen(int s, vector<int> &nums);
};
int make_main209();


/*******59、螺旋矩阵II********/
class Solution59 {
public:
    vector<vector<int>> generateMatrix(int n);
};


#endif //LEETCODE_ARRAY_H
