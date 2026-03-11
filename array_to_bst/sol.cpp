#include <iostream>
#include <vector>

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
    TreeNode *helper(std::vector<int> &v, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        int mid = (start + end) /  2;
        TreeNode *root = new TreeNode(v[mid]);

        root->left = helper(v, start, mid - 1);
        root->right = helper(v, mid + 1, end);

        return root;

    }
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};