#include <iostream>
#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string res = "";
        int n = command.length();
        for (int i = 0; i < n; ++i) {
            if (command[i] == 'G') {
                res += 'G';
            }
            else if (command[i] == '(') {
                if (command[i+1] == 'a') {
                    res += "al";
                }
                else if(command[i+1] == ')') {
                    res += 'o';
                }
            }
            else {
                continue;
            }
        }

        return res;
    }
};