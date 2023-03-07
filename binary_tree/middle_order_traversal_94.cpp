//
// Created by wxw on 23-3-7.
//
#include "binary_tree.h"

void Solution94::traversal(TreeNode *root, vector<int> & result) {
    if(root == nullptr) return;
    traversal(root->left, result);
    result.push_back(root->val);
    traversal(root->right, result);
}

vector<int> Solution94::inorderTraversal(TreeNode *root) {
    vector<int> result;
    traversal(root, result);
    return result;
}
