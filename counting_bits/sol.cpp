#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        int cnt = 0;
        int newI;
        for (int i = 0; i <= n; i++) {
            cnt = 0;
            newI = i;
            while (newI > 0) {
                cnt += newI & 1;
                newI >>= 1;
            }

            ans.push_back(cnt);
        }

        return ans;
    }
};