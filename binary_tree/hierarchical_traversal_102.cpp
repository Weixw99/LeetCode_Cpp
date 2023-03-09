//
// Created by wxw on 23-3-9.
//
#include "binary_tree.h"

vector<vector<int>>  Solution102::levelOrder(TreeNode *root) {
    queue<TreeNode*> node;
    vector<vector<int>> result;
    if (root != nullptr) node.push(root);
    while (!node.empty()) {
        int size = node.size();
        vector<int> tmp;
        for(int i = 0;i < size;i++){
            TreeNode* wxw = node.front();
            if(wxw->left) node.push(wxw->left);
            if(wxw->right) node.push(wxw->right);
            node.pop();
            tmp.push_back(wxw->val);
        }
        result.push_back(tmp);
    }
    return  result;
}
