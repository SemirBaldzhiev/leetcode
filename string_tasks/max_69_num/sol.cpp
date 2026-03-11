#include <iostream>
#include <string>

class Solution {
public:
    int maximum69Number (int num) {
        std::string s = std::to_string(num);
        int ans = num;

        for (int i = 0; i < s.length(); i++){
            if (s[i] == '6') {
                s[i] = '9';
                int n = std::stoi(s);
                ans = std::max(ans, n);
                s[i] = '6';
            }
        }

        return ans;
    }
};