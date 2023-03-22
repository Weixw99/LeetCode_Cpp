//
// Created by wxw on 23-3-7.
//

#ifndef LEETCODE_CPP_BINARY_TREE_H
#define LEETCODE_CPP_BINARY_TREE_H

#include <iostream>
#include "queue"
#include "vector"
#include "stack"
#include <climits>
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
class Solution101 {
public:
    bool isSymmetric(TreeNode* root);
    bool compare(TreeNode* left, TreeNode* right);
};
int make_main101();
/*******104.二叉树的最大深度********/
class Solution104 {
public:
    int maxDepth(TreeNode* root);
};
int make_main104();
/*******111.二叉树的最小深度********/
class Solution111 {
public:
    int minDepth(TreeNode* root);
};
/*******222.完全二叉树的节点个数********/
class Solution222 {
public:
    int countNodes(TreeNode* root);
};
/*******110.平衡二叉树********/
class Solution110 {
public:
    bool isBalanced(TreeNode* root);
    int traversal(TreeNode* node, int high);
};
/*******257. 二叉树的所有路径********/
class Solution257 {
public:
    vector<string> binaryTreePaths(TreeNode* root);
    void traversal(TreeNode* node, vector<int>& path, vector<string>& result);
};
TreeNode* init_tree(vector<int> num);
int make_main257();
/*******404.左叶子之和********/
class Solution404 {
public:
    int sumOfLeftLeaves(TreeNode* root);
    void traversal(TreeNode* node, int &result);
};
int make_main404();
/*******513.找树左下角的值********/
class Solution513 {
public:
    int max_depth = 0;
    int result;
    int findBottomLeftValue(TreeNode* root);
    void traversal(TreeNode* node, int depth);
};
int make_main513();
/*******112. 路径总和********/
class Solution112 {
public:
    bool hasPathSum(TreeNode* root, int targetSum);
    bool traversal(TreeNode* root, vector<int> path, int targetSum);
};
/*******106.从中序与后序遍历序列构造二叉树********/
class Solution106 {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    TreeNode* traversal(vector<int> inorder, vector<int> postorder);
};
int make_main106();
/*******654.最大二叉树********/
class Solution654 {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums);
    TreeNode* traversal(vector<int> nums);
};
int make_main654();
/*******617.合并二叉树********/
class Solution617 {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
};
/*******700.二叉搜索树中的搜索********/
class Solution700 {
public:
    TreeNode* searchBST(TreeNode* root, int val);
};
int make_main700();
/*******98.验证二叉搜索树********/
class Solution98 {
public:
    long long maxVal = LONG_MIN;
    bool isValidBST(TreeNode* root);
    bool traversal(TreeNode*);
};
/*******530.二叉搜索树的最小绝对差********/
class Solution530 {
public:
    int getMinimumDifference(TreeNode* root);
};
/*******501.二叉搜索树中的众数********/
class Solution501 {
public:
    vector<int> findMode(TreeNode* root);
};
int make_main501();
/*******236. 二叉树的最近公共祖先********/
class Solution236 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    vector<TreeNode *> traversal(TreeNode *root, TreeNode* find);
};
/*******235. 二叉搜索树的最近公共祖先********/
class Solution235 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    TreeNode* traversal(TreeNode* cur, TreeNode* p, TreeNode* q);
};
/*******701.二叉搜索树中的插入操作********/
class Solution701 {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val);
};
/*******450.删除二叉搜索树中的节点********/
class Solution450 {
public:
    TreeNode* deleteNode(TreeNode* root, int key);
};
/*******669. 修剪二叉搜索树********/
class Solution669 {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high);
};
int make_main669();
/*******108.将有序数组转换为二叉搜索树********/
class Solution108 {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums);
};
/*******538.把二叉搜索树转换为累加树********/
class Solution538 {
public:
    TreeNode* convertBST(TreeNode* root);
    void traversal(TreeNode *root, int &num);
};
int make_main538();
#endif //LEETCODE_CPP_BINARY_TREE_H
