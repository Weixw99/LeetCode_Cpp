//
// Created by wxw on 23-3-7.
//
#include "binary_tree.h"

void Solution145::traversal(TreeNode *root, vector<int> & result) {
    if(root == nullptr) return;
    traversal(root->left, result);
    traversal(root->right, result);
    result.push_back(root->val);
}

vector<int> Solution145::postorderTraversal(TreeNode *root) {
    vector<int> result;
    traversal(root, result);
    return result;
}
