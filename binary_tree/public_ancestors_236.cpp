//
// Created by wxw on 23-3-19.
//
#include "binary_tree.h"

vector<TreeNode *> Solution236::traversal(TreeNode *root, TreeNode *find) {
    vector<TreeNode *> result;
    if(!root) return result;
    if(root == find){
        result.push_back(root);
        return result;
    }
    result = traversal(root->left, find);
    if(!result.empty()){
        result.push_back(root);
        return result;
    }
    result = traversal(root->right, find);
    if(!result.empty()){
        result.push_back(root);
        return result;
    }
    return result;
}

TreeNode* Solution236::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    vector<TreeNode *> result_p = traversal(root, p);
    vector<TreeNode *> result_q = traversal(root, q);
    for(auto pp : result_p){
        for(auto qq : result_q){
            if(pp == qq){
                return pp;
            }
        }
    }
    return nullptr;
}

