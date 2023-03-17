//
// Created by wxw on 23-3-17.
//
#include "binary_tree.h"

TreeNode* Solution700::searchBST(TreeNode *root, int val) {
    stack<TreeNode*> sta;
    if(root) sta.push(root);
    while(!sta.empty()){
        TreeNode* tmp = sta.top(); sta.pop();
        if(!tmp) return nullptr;
        if(tmp->val == val) return tmp;
        else{
            if(val > tmp->val) sta.push(tmp->right);
            else sta.push(tmp->left);
        }
    }
    return nullptr;
}

int make_main700(){
    int val = 2;
    vector<int> num{4,2,7,1,3};
    TreeNode* tree = init_tree(num);
    Solution700 wxw;
    TreeNode* me = wxw.searchBST(tree, val);
    return 0;
}