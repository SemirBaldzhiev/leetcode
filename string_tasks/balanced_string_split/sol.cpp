#include <iostream>
#include <string>

class Solution {
public:
    int balancedStringSplit(std::string s) {
        int l = 0, r = 0, ans = 0;
        for (char c : s) {
            if (c == 'L') {
                ++l;
            }
            else {
                ++r;
            }

            if (r == l) {
                ++ans;
                l = 0;
                r = 0;
            }
        }

        return ans;
    }
};