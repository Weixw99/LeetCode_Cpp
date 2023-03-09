//
// Created by wxw on 23-3-9.
//
#include "binary_tree.h"

TreeNode* Solution226::invertTree(TreeNode *root) {
    queue<TreeNode*> que;
    if(root) que.push(root);
    while (!que.empty()){
        int size = que.size();
        for(int i = 0;i < size;i++){
            TreeNode* tmp = que.front();
            que.pop();
            swap(tmp->left, tmp->right);
            if(tmp->left) que.push(tmp->left);
            if(tmp->right) que.push(tmp->right);
        }
    }
    return root;
}

int make_main226(){
    vector<int> root{0,1,2};
    vector<TreeNode*> tree;
    for(int i = 0;i < root.size();i++){
        TreeNode* tmp = new TreeNode(root[i]);
        tree.push_back(tmp);
    }
    for(int j = 1;j < tree.size();j++){
        if (2*j < tree.size()) tree[j]->left = tree[2*j];
        if (2*j < tree.size()) tree[j]->right = tree[2*j+1];
    }
    TreeNode*cur = tree[1];
    Solution226 wxw;
    TreeNode* me = wxw.invertTree(cur);
    return 0;
}