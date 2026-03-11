#include <iostream>
#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string ans;

        for (int i = 0; i < address.length(); i++){
            if (address[i] == '.') {
                ans += "[.]";
            }
            else {
                ans += address[i];
            }
        }

        return ans;
    }
};