#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int sum = 0;

        for (int n : nums) {
            sum += n;
        }

        return ((nums.size()+1)*(nums.size())/2) - sum;
    }
};