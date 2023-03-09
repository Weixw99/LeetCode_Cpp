//
// Created by wxw on 23-3-7.
//

#ifndef LEETCODE_CPP_BINARY_TREE_H
#define LEETCODE_CPP_BINARY_TREE_H

#include <iostream>
#include "queue"
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/*******144. 二叉树的前序遍历********/
class Solution144 {
public:
    vector<int> preorderTraversal(TreeNode* root);
    void traversal(TreeNode* root, vector<int> &result);
};
int make_main144();
/*******145. 二叉树的后序遍历********/
class Solution145 {
public:
    vector<int> postorderTraversal(TreeNode* root);
    void traversal(TreeNode* root, vector<int> &result);
};
/*******94. 二叉树的中序遍历********/
class Solution94 {
public:
    vector<int> inorderTraversal(TreeNode* root);
    void traversal(TreeNode* root, vector<int> &result);
};
/*******102. 二叉树的层序遍历********/
class Solution102 {
public:
    vector<vector<int>> levelOrder(TreeNode* root);
};
/*******226.翻转二叉树********/
class Solution226 {
public:
    TreeNode* invertTree(TreeNode* root);
};
int make_main226();
/*******101. 对称二叉树********/

/*******104.二叉树的最大深度********/

/*******111.二叉树的最小深度********/

/*******222.完全二叉树的节点个数********/

/*******110.平衡二叉树********/

/*******257. 二叉树的所有路径********/

/*******404.左叶子之和********/

/*******513.找树左下角的值********/

/*******112. 路径总和********/

/*******106.从中序与后序遍历序列构造二叉树********/

/*******654.最大二叉树********/

/*******617.合并二叉树********/

/*******700.二叉搜索树中的搜索********/

/*******98.验证二叉搜索树********/

/*******530.二叉搜索树的最小绝对差********/

/*******501.二叉搜索树中的众数********/

/*******236. 二叉树的最近公共祖先********/

/*******235. 二叉搜索树的最近公共祖先********/

/*******701.二叉搜索树中的插入操作********/

/*******450.删除二叉搜索树中的节点********/

/*******669. 修剪二叉搜索树********/

/*******108.将有序数组转换为二叉搜索树********/

/*******538.把二叉搜索树转换为累加树********/

#endif //LEETCODE_CPP_BINARY_TREE_H
