#include <iostream>
#include <unordered_map>
#include <string>

bool isIsomorphic(std::string s, std::string t) {
    std::unordered_map<char, char> m1;
    std::unordered_map<char, char> m2;
    
    if (s.size() != t.size()){
        return false;
    }
    
    for (int i = 0; i < s.size(); i++) {
        
        char c1 = s[i];
        char c2 = t[i];
        
        if ((m1.count(c1) && m1[c1] != c2) || (m2.count(c2) && m2[c2] != c1)) {
            return false;
        }
        
        m1[c1] = c2;
        m2[c2] = c1;
    }
    
    return true;
}

int main() {
    return 0;
}