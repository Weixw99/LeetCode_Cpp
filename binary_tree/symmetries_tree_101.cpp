//
// Created by wxw on 23-3-10.
//
#include "binary_tree.h"

bool Solution101::compare(TreeNode *left, TreeNode *right) {
    if(left == nullptr && right == nullptr) return true;
    else if(left != nullptr && right == nullptr) return false;
    else if(left == nullptr && right != nullptr) return false;
    if(left->val != right->val) return false;

    bool outside = compare(left->left, right->right);
    bool inside = compare(left->right, right->left);
    return outside && inside;

}

bool Solution101::isSymmetric(TreeNode *root) {
    if(root == nullptr) return false;
    bool result = compare(root->left, root->right);
    return result;
}

int make_main101(){
    vector<int> root{0,1,2,2,3,4,4,3};
    vector<TreeNode*> tree;
    for(int i = 0;i < root.size();i++){
        TreeNode* tmp = new TreeNode(root[i]);
        tree.push_back(tmp);
    }
    for(int j = 1;j < tree.size();j++){
        if (2*j < tree.size()) tree[j]->left = tree[2*j];
        if (2*j < tree.size()) tree[j]->right = tree[2*j+1];
    }
    TreeNode* cur = tree[1];

    Solution101 wxw;
    bool me = wxw.isSymmetric(cur);
    return 0;
}