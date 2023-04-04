//
// Created by wxw on 23-4-4.
//
# include "greedy.h"

int Solution1005::largestSumAfterKNegations(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end(), cmp);       // 第一步
    for (int i = 0; i < nums.size(); i++) { // 第二步
        if (nums[i] < 0 && k > 0) {
            nums[i] *= -1;
            k--;
        }
    }
    if (k % 2 == 1) nums[nums.size() - 1] *= -1; // 第三步
    int result = 0;
    for (int num : nums) result += num;        // 第四步
    return result;
}