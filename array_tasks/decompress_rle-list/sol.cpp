#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> ans;
        int n = nums.size();
        
        for (int i = 0; i < n; i+=2) {
            ans.insert(ans.end(), nums[i], nums[i+1]);
        }

        return ans;
    }
};