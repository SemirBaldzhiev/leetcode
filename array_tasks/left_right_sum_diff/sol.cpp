#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        int n = nums.size();
        
        std::vector<int> leftSum(n);
        std::vector<int> rightSum(n);
        std::vector<int> ans(n);

        int currLeftSum = 0;
        int currRightSum = 0;

        for (int i = 0; i < n; ++i) {
            leftSum[i] = currLeftSum;
            rightSum[n-i-1] = currRightSum;
            currLeftSum += nums[i];
            currRightSum += nums[n-i-1];
        }

        for (int i = 0; i < n; ++i) {
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }

        return ans;
    }
};