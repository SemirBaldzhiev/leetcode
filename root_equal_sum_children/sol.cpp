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
    bool checkTree(TreeNode* root) {
        if (root == nullptr || root->left == nullptr || root->right == nullptr) {
            return true;
        }

        return root->val == (root->left->val + root->right->val) && checkTree(root->left) && checkTree(root->right);
    }
};