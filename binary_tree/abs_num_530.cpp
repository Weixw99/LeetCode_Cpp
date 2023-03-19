//
// Created by wxw on 23-3-18.
//
#include "binary_tree.h"

int Solution530::getMinimumDifference(TreeNode *root) {
    stack<TreeNode*> sta;
    sta.push(root);
    int result = INT_MAX;
    while(!sta.empty()){
        TreeNode* tmp = sta.top(); sta.pop();
        if(tmp){
            sta.push(tmp->right);
            sta.push(tmp->left);
            sta.push(tmp);
            sta.push(nullptr);

        }else{
            tmp = sta.top(); sta.pop();
            if(tmp->left){
                if(abs(tmp->val - tmp->left->val) < result) result = abs(tmp->val - tmp->left->val);
            }
            if(tmp->right){
                if(abs(tmp->val - tmp->right->val) < result) result = abs(tmp->val - tmp->right->val);
            }
        }
    }
    return result;
}
