#include <iostream>
#include <string>

class Solution {
public:
    int minPartitions(std::string n) {
        int len = n.length();
        int max = 0;
        for (int i = 0; i < len; ++i) {
            int num = n[i] - '0';
            if (num > max) {
                max = num;
            }
        }

        return max;
    }
};