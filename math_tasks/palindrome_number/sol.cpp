#include <iostream>

bool isPalindrome(int x) {
    
    if(x < 0){
        return false;
    }
    
    unsigned int reverse = 0;
    int copyX = x;
    
    while(x != 0){
        reverse *= 10;
        reverse += (x % 10);
        x /= 10;
    }
    
    x = copyX;
    
    if(x == reverse){
        return true;
    }
    
    return false;
}

int main() {
    
    return 0;
}