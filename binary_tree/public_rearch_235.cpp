//
// Created by wxw on 23-3-20.
//
#include "binary_tree.h"

TreeNode* Solution235::traversal(TreeNode *cur, TreeNode *p, TreeNode *q) {

}
TreeNode* Solution235::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if(root == nullptr || root == p || root == q) return root;
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);
    if(left && right) return root;
    else if(left && !right) return left;
    else if(!left && right) return right;
    return nullptr;
}