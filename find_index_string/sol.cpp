#include <iostream>
#include <string>

int strStr(std::string haystack, std::string needle) {
    if (needle.length() == 0) {
        return 0;
    }
    int j = 0, firstOcc = 0;
    int len = haystack.length();
    
    for (int i = 0; i < len; i++) {
        
        if (haystack[i] == needle[j]) { 
            if (j == 0){
                firstOcc = i;    
            }
            j++;
        }
        else{
            if (j != 0){
                j = 0;
                i = firstOcc;
            }
        }
        
        if (j == needle.length()){
            return firstOcc;
        }
    }
    
    return -1;
}

int main() {
    return 0;
}