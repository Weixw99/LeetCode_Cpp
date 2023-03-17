//
// Created by wxw on 23-3-17.
//
#include "binary_tree.h"



bool Solution98::isValidBST(TreeNode *root) {
    if (root == NULL) return true;

    bool left = isValidBST(root->left);
    // 中序遍历，验证遍历的元素是不是从小到大
    if (maxVal < root->val) maxVal = root->val;
    else return false;
    bool right = isValidBST(root->right);

    return left && right;
}