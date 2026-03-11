#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    
    const int MAX_INT = 2147483647;
    
    std::string prefix = "";
    int size = strs.size();
    
    char letter = strs[0][0];
    
    if(size == 1){
        prefix += strs[0];
        return prefix;
    }
    
    
    if(!letter){
        return prefix;
    }
    
    int j = 0;
    int i = 0;
    
    int wordMinLength = MAX_INT;
    
    for(int k = 0; k < size; k++){
        if(strs[k].length() < wordMinLength){
            wordMinLength = strs[k].length();
        }
    }
        
        
    
   
    while (strs[i][j] == letter){
        
        if (i == size - 1){
            prefix += letter;
            i = 0;
            j++;
            
            if(j >= wordMinLength){
                break;
            }
            
            letter = strs[i][j];
            continue;
        }
        i++;
    }
    
    return prefix;
}

int main() {
    return 0;
}