//
// Created by wxw on 23-3-11.
//
#include "binary_tree.h"

int Solution104::maxDepth(TreeNode *root) {
    int result = 0;
    queue<TreeNode*> que;
    if(root) que.push(root);
    while(!que.empty()){
        int size = que.size();
        result++;
        for(int i = 0;i < size;i++){
            TreeNode* tmp = que.front();
            que.pop();
            if (tmp->left) que.push(tmp->left);
            if (tmp->right) que.push(tmp->right);
        }
    }
    return result;
}

int make_main104(){


    return 0;
}