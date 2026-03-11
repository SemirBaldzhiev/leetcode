#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> ans(n);
        int cnt = 0;
        for (int i = 0; i < n; ++i) {

            for (int j = 0; j < n; ++j) {
                if (nums[j] < nums[i] && i != j) {
                    ++cnt;
                }
            }
            ans[i] = cnt;
            cnt = 0;
        }

        return ans;
    }
};