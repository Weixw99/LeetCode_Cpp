//
// Created by wxw on 23-3-7.
//
#include "binary_tree.h"

void Solution144::traversal(TreeNode *root, vector<int> & result) {
    if(root == nullptr) return;
    result.push_back(root->val);
    traversal(root->left, result);
    traversal(root->right, result);
}

vector<int> Solution144::preorderTraversal(TreeNode *root) {
    vector<int> result;
    traversal(root, result);
    return result;
}
