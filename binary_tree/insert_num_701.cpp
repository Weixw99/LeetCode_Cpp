//
// Created by wxw on 23-3-20.
//
#include "binary_tree.h"

TreeNode* Solution701::insertIntoBST(TreeNode *root, int val) {
    TreeNode *wxw = root;
    if(!wxw){
        TreeNode *tmp = new TreeNode(val);
        wxw = tmp;
        return wxw;
    }
    while(wxw){
        if(val > wxw->val){
            if(wxw->right == nullptr){
                TreeNode *tmp = new TreeNode(val);
                wxw->right = tmp;
                return root;
            }else{
                wxw = wxw->right;
            }
        }else{
            if(wxw->left == nullptr){
                TreeNode *tmp = new TreeNode(val);
                wxw->left = tmp;
                return root;
            }else{
                wxw = wxw->left;
            }
        }
    }
    return root;
}