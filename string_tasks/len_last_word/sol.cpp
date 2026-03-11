#include <iostream>
#include <string>

int lengthOfLastWord(std::string s) {
    
    int len = s.length();
    int count = 0;
    
    for (int i = len - 1; i >= 0; --i) {
        
         if (count > 0 && std::isspace(s[i])){
            break;
        }
        
        if (std::isspace(s[i])){
            continue;
        }
        
        count++;
    }
    
    return count;
}

int main() {

    return 0;
}