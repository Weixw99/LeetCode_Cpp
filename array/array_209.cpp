//
// Created by wxw on 23-2-18.
//
#include "array.h"

int Solution209::minSubArrayLen(int s, vector<int> &nums) {
    int result = INT32_MAX;
    int sum = 0; // 滑动窗口数值之和
    int i = 0; // 滑动窗口起始位置
    int subLength = 0; // 滑动窗口的长度
    for (int j = 0;j < nums.size();j++)
    {
        sum += nums[j];
        while (sum >= s)
        {
            subLength = j - i + 1;
            sum -= nums[i++];
            result = result < subLength ? result : subLength;
        }
    }
    return result == INT32_MAX ? 0:result;
}


int make_main209()
{
    vector<int> nu{2,3,1,2,4,3};
    int target = 7;
    Solution209 wxw;
    int ww;

    ww = wxw.minSubArrayLen(target, nu);
    cout << "结果:" <<ww<<endl;
    return 0;
}