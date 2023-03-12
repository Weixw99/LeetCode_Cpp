//
// Created by wxw on 23-3-12.
//
#include "binary_tree.h"

int Solution222::countNodes(TreeNode *root) {
    stack<TreeNode*> sta;
    vector<TreeNode*> result;
    if (root) sta.push(root);
    while(!sta.empty()){
        TreeNode* tmp = sta.top();
        sta.pop();
        if(tmp){
            if(tmp->right) sta.push(tmp->right);
            sta.push(tmp);
            sta.push(nullptr);
            if(tmp->left) sta.push(tmp->left);
        }else{
            result.push_back(sta.top());
            sta.pop();
        }
    }
    return result.size();
}