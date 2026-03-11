#include <iostream>
#include <string>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        
        int sumS = 0;
        int sumT = 0;

        for (int i = 0; i < s.length(); i++) {
            sumS += s[i];
            sumT += t[i];
        }

        sumT += t[t.length() - 1];

        return sumT - sumS;
    }
};