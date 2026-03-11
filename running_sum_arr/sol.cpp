#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        
        int n = nums.size();
        int currSum = 0;
        std::vector<int> ans;
        for (int i = 0; i < n; ++i) {
            currSum += nums[i];
            ans.push_back(currSum);
        }

        return ans;
    }
};