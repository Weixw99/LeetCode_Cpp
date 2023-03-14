//
// Created by wxw on 23-3-14.
//
#include "binary_tree.h"

void Solution513::traversal(TreeNode* node, int depth){
    if (!node) return;
    traversal(node->left, depth+1);
    traversal(node->right, depth+1);
    if(!node->left && !node->right && depth > max_depth){
        max_depth = depth;
        result = node->val;
    }
}

int Solution513::findBottomLeftValue(TreeNode *root) {
    int depth = 0;
    traversal(root, depth);
    return result;

}
int make_main513(){
    vector<int> num{1,2,3,4,0,5,6,0,0,7};
    TreeNode* tree = init_tree(num);
    Solution513 wxw;
    int me = wxw.findBottomLeftValue(tree);
    cout<<me;
    return 0;
}