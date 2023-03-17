//
// Created by wxw on 23-3-16.
//
#include "binary_tree.h"

TreeNode* Solution654::traversal(vector<int> nums) {
    if (nums.size() == 0) return nullptr;
    int in_pos = 0;
    for (int i = 0,j = nums.size()-1;i < j; ){
        if(nums[i] > nums[j]){
            in_pos = i;
            j--;
        }else if(nums[i] < nums[j]){
            in_pos = j;
            i++;
        }
    }
    TreeNode* node = new TreeNode(nums[in_pos]);
    vector<int> left_nums(nums.begin(), nums.begin()+in_pos);
    vector<int> right_nums(nums.begin()+in_pos+1, nums.end());
    node->left = traversal(left_nums);
    node->right = traversal(right_nums);
    return node;
}


TreeNode* Solution654::constructMaximumBinaryTree(vector<int> &nums) {
    return traversal(nums);
}

int make_main654(){
    vector<int> nums{3};
    Solution654 wxw;
    TreeNode* me = wxw.constructMaximumBinaryTree(nums);
    return 0;
}