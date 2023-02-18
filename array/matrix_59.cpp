//
// Created by wxw on 23-2-18.
//
#include "array.h"

vector<vector<int>> Solution59::generateMatrix(int n) {
    vector<vector<int>> res(n, vector<int>(n, 0));
    int start_x = 0, start_y = 0;
    int loop = n/2;
    int mid = n / 2; // 矩阵中间的位置，例如：n为3， 中间的位置就是(1，1)，n为5，中间位置为(2, 2)
    int count = 1; // 用来给矩阵中每一个空格赋值
    int offset = 1; // 需要控制每一条边遍历的长度，每次循环右边界收缩一位
    int i,j;
    while(loop--)
    {
        i = start_x;
        j = start_y;
        for (j = start_y;j < n - offset; j++)
        {
            res[start_x][j] = count++;
        }
        for (i = start_x;i < n - offset; i++)
        {
            res[i][j] = count++;
        }
        for (;j > start_y;j--)
        {
            res[i][j] = count++;
        }
        for(;i > start_x;i--)
        {
            res[i][j] = count++;
        }
        start_x++;
        start_y++;
        offset++;
    }
    if(n%2 == 1)
    {
        res[mid][mid] = count;
    }
    return res;
}