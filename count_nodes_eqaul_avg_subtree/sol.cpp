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

    int countNodes(TreeNode* node) {
         if (node == nullptr) {
             return 0;
         }

         return 1 + countNodes(node->left) + countNodes(node->right);
    }

    int sumNodes(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        return node->val + sumNodes(node->left) + sumNodes(node->right);
    }

    
    int averageOfSubtree(TreeNode* root) {

        if (root == nullptr) {
            return 0;
        }

        if (sumNodes(root) / countNodes(root) == root->val) {
            return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
        }
        else {
            return averageOfSubtree(root->left) + averageOfSubtree(root->right);
        }   
    }
};