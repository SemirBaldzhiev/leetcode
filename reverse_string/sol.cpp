#include <iostream>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        
        int size = s.size();
        for (int i = 0; i < size / 2; ++i) {
            char temp = s[i];
            s[i] = s[size - i - 1];
            s[size - i - 1] = temp;
        }
    }
};