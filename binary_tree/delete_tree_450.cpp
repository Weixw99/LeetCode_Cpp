//
// Created by wxw on 23-3-21.
//
#include "binary_tree.h"

TreeNode* Solution450::deleteNode(TreeNode *root, int key) {
    if(!root) return root;
    if(root->val == key){
        if(!root->left && !root->right) return nullptr;
        else if(root->left && !root->right) return root->left;
        else if(!root->left && root->right) return root->right;
        else{
            TreeNode * wxw = root->right;
            while(wxw->left)
                wxw = wxw->left;
            swap(wxw->val, root->val);
            root->right = deleteNode(root->right, key);
        }
    }
    if(root->val < key) root->right = deleteNode(root->right, key);
    else if(root->val > key) root->left = deleteNode(root->left, key);
    return root;
}