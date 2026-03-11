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
    void reverseHelper(TreeNode *root1, TreeNode *root2, int k) {
        
        if (root1 == nullptr || root2 == nullptr) {
            return;
        }

        if (k % 2 != 0) {
            int temp = root1->val;
            root1->val = root2->val;
            root2->val = temp;
        }
        reverseHelper(root1->left, root2->right, k+1);
        reverseHelper(root1->right, root2->left, k+1);
       
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        if (root == nullptr) {
            return nullptr;
        }

        reverseHelper(root->left, root->right, 1);
        return root;
    }
};
