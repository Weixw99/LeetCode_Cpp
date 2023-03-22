//
// Created by wxw on 23-3-22.
//
#include "binary_tree.h"

TreeNode* Solution108::sortedArrayToBST(vector<int> &nums) {
    if(nums.empty()) return nullptr;
    int num = nums.size()/2;
    TreeNode* node = new TreeNode(nums[num]);
    vector<int> left_nums(nums.begin(), nums.begin()+num);
    vector<int> right_nums(nums.begin()+num+1, nums.end());
    node->left = sortedArrayToBST(left_nums);
    node->right = sortedArrayToBST(right_nums);
    return node;
}