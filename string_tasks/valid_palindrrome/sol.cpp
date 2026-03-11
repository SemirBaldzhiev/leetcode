#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        
        int j = s.size() - 1;
        int i = 0;
        while (i != j) {
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
            
            if (s[j] >= 'A' && s[j] <= 'Z'){
                s[j] = s[j] + 32;
            }
            
            if ((s[j] < 'a' || s[j] > 'z') && (s[j] < '0' || s[j] > '9')){
                j--;
                continue;
            }
            
            if ((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
                i++;
                continue;
            }
            
            if (s[i] != s[j]){
                return false;
            }
            j--;
            if (i == j) break;
            i++;
        }
        
        return true;
    }
};