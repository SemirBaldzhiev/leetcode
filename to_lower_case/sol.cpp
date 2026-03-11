#include <iostream>
#include <string>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        
        std::string ans;
        for (char c : s) {
            ans += tolower(c);
        }

        return ans;
    }
};