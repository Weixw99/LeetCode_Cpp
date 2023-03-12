//
// Created by wxw on 23-3-12.
//
#include "binary_tree.h"

int Solution110::traversal(TreeNode *node, int high) {
    if (node == nullptr) return 0;
    int left = traversal(node->left, high);
    int right = traversal(node->right, high);
    if(left < 0 || right < 0) high = -1;
    else if (abs(left - right) > 1) high = -1;
    else high = max(left, right)+1;
    return high;
}

bool Solution110::isBalanced(TreeNode *root) {
    int result = traversal(root, 0);
    if(result < 0) return false;
    else return true;

}