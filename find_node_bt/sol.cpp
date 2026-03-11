#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution {
public:

    void getNode(TreeNode* root, TreeNode* target, TreeNode*& node) {
        if (root == nullptr) {
            return;
        }

        if (root->val == target->val) {
            node = root;
        }

        getNode(root->left, target, node);
        getNode(root->right, target, node);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (cloned == nullptr || target == nullptr) {
            return nullptr;
        }

        TreeNode* node = new TreeNode;
        getNode(cloned, target, node);
        return node;
    }
};