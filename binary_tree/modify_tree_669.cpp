//
// Created by wxw on 23-3-22.
//
#include "binary_tree.h"

TreeNode* Solution669::trimBST(TreeNode *root, int low, int high) {
    if(!root) return root;
    while(root->val < low || root->val > high){
        if(!root->left && !root->right) return nullptr;
        if(root->val < low)
            root = root->right;
        else if(root->val > high)
            root = root->left;
        if(!root) return root;
    }
    root->left = trimBST(root->left, low, high);
    root->right = trimBST(root->right, low, high);
    return root;
}

int make_main669(){
    int l = 1;
    int h = 2;
    vector<int> num{1,-1,2};
    TreeNode* tree = init_tree(num);
    Solution669 wxw;
    TreeNode* me = wxw.trimBST(tree, l, h);
    return 0;
}