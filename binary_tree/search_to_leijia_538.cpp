//
// Created by wxw on 23-3-22.
//
#include "binary_tree.h"

void Solution538::traversal(TreeNode *root, int &num) {
    if(!root) return;
    traversal(root->right, num);
    num += root->val;
    root->val = num;
    traversal(root->left, num);
}

TreeNode* Solution538::convertBST(TreeNode *root){
    int num = 0;
    traversal(root, num);
    return root;
}

int make_main538(){
    vector<int> num{4,1,6,-1,2,5,7,0,0,0,3,0,0,0,8};
    TreeNode* tree = init_tree(num);
    Solution538 wxw;
    TreeNode* me = wxw.convertBST(tree);
    return 0;
}