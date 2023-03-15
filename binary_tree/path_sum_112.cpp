//
// Created by wxw on 23-3-15.
//
#include "binary_tree.h"

bool Solution112::traversal(TreeNode *root, vector<int> path, int targetSum) {
    if (!root) return false;
    path.push_back(root->val);
    if(!root->left && !root->right){
        int result = 0;
        for(int i : path){
            result += i;
        }
        if(result == targetSum) return true;
        else return false;
    }
    bool left_b = traversal(root->left, path, targetSum);
    bool right_b = traversal(root->right, path, targetSum);
    return left_b || right_b;
}

bool Solution112::hasPathSum(TreeNode *root, int targetSum) {
    vector<int> path;
    return traversal(root, path, targetSum);
}