//
// Created by wxw on 23-3-14.
//
#include "binary_tree.h"

void Solution404::traversal(TreeNode *node, int &result) {
    if (!node) return;
    if (node->left && !node->left->left && !node->left->right) result += node->left->val;
    traversal(node->left, result);
    traversal(node->right, result);
}

int Solution404::sumOfLeftLeaves(TreeNode *root) {
    int result = 0;
    if(!root) return result;
    traversal(root,result);
    return result;
}

int make_main404(){
    vector<int> num{1,2,3,4,5};
    TreeNode* tree = init_tree(num);
    Solution404 wxw;
    int me = wxw.sumOfLeftLeaves(tree);
    cout<<me;
    return 0;
}