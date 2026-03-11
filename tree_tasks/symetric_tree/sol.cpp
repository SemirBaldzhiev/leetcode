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
    bool isSymHelper(TreeNode *r1, TreeNode *r2) {
        if (r1 == nullptr && r2 != nullptr) {
            return false;
        }

        if (r1 != nullptr && r2 == nullptr) {
            return false;
        }

        if (r1 == nullptr && r2 == nullptr) {
            return true;
        }

        if (r1->val != r2->val) {
            return false;
        }

        return isSymHelper(r1->left, r2->right) && isSymHelper(r1->right, r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return isSymHelper(root->left, root->right);
        
    }
};