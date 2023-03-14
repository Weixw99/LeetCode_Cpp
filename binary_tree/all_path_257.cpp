//
// Created by wxw on 23-3-13.
//
#include "binary_tree.h"

TreeNode* init_tree(vector<int> num){
    vector<TreeNode*> tree;
    for(int i : num){
        if (i != 0) {
            TreeNode* tmp = new TreeNode(i);
            tree.push_back(tmp);
        } else{
            tree.push_back(nullptr);
        }
    }
    for(int j = 0;j < num.size();j++){
        if(!tree[j]) continue;
        if (2*(j+1) <= tree.size() && tree[2*j+1]){
            tree[j]->left = tree[2*j+1];
        }
        if (2*(j+1) + 1 <= tree.size() && tree[2*j+2]){
            tree[j]->right = tree[2*j+2];
        }
    }
    return tree[0];
}

void Solution257::traversal(TreeNode *node, vector<int> &path, vector<std::string> &result) {
    if(node==nullptr)
        return ;
    path.push_back(node->val);
    if(!node->left && !node->right){
        string tmp;
        for(int i = 0; i <path.size();i++){
            tmp += to_string(path[i]);
            if(i != path.size()-1) tmp += "->";
        }
        result.push_back(tmp);
        return;
    }
    if(node->left){
        traversal(node->left, path, result);
        path.pop_back();
    }if(node->right){
        traversal(node->right, path, result);
        path.pop_back();
    }




}

vector<string> Solution257::binaryTreePaths(TreeNode *root) {
    vector<string> result;
    vector<int> path;
    traversal(root, path, result);
    return result;
}

int make_main257(){
    vector<int> root{1,2,3,0,5};
    TreeNode* tree = init_tree(root);
    Solution257 wxw;
    vector<string> me = wxw.binaryTreePaths(tree);
    return 0;
}