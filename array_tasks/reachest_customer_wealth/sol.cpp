#include <iostream>
#include <vector>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        
        int m = accounts.size();
        int n = accounts[0].size();
        int sum, maxSum = 0;
        for (int i = 0; i < m; ++i) {
            sum = 0;
            for (int j = 0; j < n; ++j) {
                sum += accounts[i][j];
            }
            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        return maxSum;
    }
};