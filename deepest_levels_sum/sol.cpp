#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    int treeHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        return 1 + std::max(treeHeight(root->left), treeHeight(root->right));
    }

    void deepestNodesSum(TreeNode* root, int height, int depth, int &sum) {

        if (root==nullptr) {
            return;
        }

        if(depth == height) {
            sum += root->val;
        }
        
        deepestNodesSum(root->left, height, depth+1, sum);
        deepestNodesSum(root->right, height, depth+1, sum);
    }

    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int height = treeHeight(root);
        deepestNodesSum(root, height, 1, sum);
        return sum;
    }
};