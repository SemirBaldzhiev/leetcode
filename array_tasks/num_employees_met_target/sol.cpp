#include <iostream>
#include <vector>

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
        int ans = 0;
        int n = hours.size();
        for (int i = 0; i < n; ++i) {
            if (hours[i] >= target) {
                ++ans;
            }
        }

        return ans;
    }
};