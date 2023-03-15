//
// Created by wxw on 23-3-15.
//
#include "binary_tree.h"

TreeNode* Solution106::traversal(vector<int> inorder, vector<int> postorder) {
    if (!postorder.size()) return nullptr;
    int inorder_pos;
    int node_val = postorder.back();
    TreeNode* node = new TreeNode(node_val);
    if(inorder.size() == 1) return node;
    for(int i = 0;i < inorder.size();i++){
        if (inorder[i] == node_val){
            inorder_pos = i;
            break;
        }
    }
    vector<int> left_inorder(inorder.begin(), inorder.begin()+inorder_pos);
    vector<int> right_inorder(inorder.begin()+inorder_pos+1, inorder.end());
    vector<int> left_post(postorder.begin(), postorder.begin()+left_inorder.size());
    vector<int> right_post(postorder.begin()+left_inorder.size(), postorder.end()-1);

    node->left = traversal(left_inorder, left_post);
    node->right = traversal(right_inorder, right_post);
    return node;
}

TreeNode* Solution106::buildTree(vector<int> &inorder, vector<int> &postorder) {
    return traversal(inorder, postorder);
}

int make_main106(){
    vector<int> inorder{9,3,15,20,7};
    vector<int> postorder{9,15,7,20,3};
    Solution106 wxw;
    TreeNode* me = wxw.buildTree(inorder, postorder);
    return 0;
}

