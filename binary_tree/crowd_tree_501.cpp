//
// Created by wxw on 23-3-19.
//
#include "binary_tree.h"
#include "unordered_map"

vector<int> Solution501::findMode(TreeNode *root) {
    stack<TreeNode*> sta;
    TreeNode* pre = nullptr;
    vector<int> result;
    int count, max_count = 0;
    if(root) sta.push(root);
    while(!sta.empty()){
        TreeNode* tmp = sta.top(); sta.pop();
        if(tmp != nullptr){
            if(tmp->right) sta.push(tmp->right);
            sta.push(tmp);
            sta.push(nullptr);
            if(tmp->left) sta.push(tmp->left);
        }else{
            tmp = sta.top(); sta.pop();
            if (pre == nullptr) count = 1;
            else if(pre->val == tmp->val){
                count++;
            }else{
                count = 1;
            };
            pre = tmp;
            if (count > max_count){
                result.clear();
                result.push_back(tmp->val);
                max_count = count;
            }else if(count == max_count){
                result.push_back(tmp->val);
            }
        }
    }
    return result;
}

int make_main501(){
    vector<int> num{1,0,2,0,0,2};
    TreeNode* tree = init_tree(num);
    Solution501 wxw;
    vector<int> me = wxw.findMode(tree);
    return 0;
}