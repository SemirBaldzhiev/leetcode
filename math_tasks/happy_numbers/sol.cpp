#include <iostream>

class Solution {
public:
    bool isHappy(int n) {
        
        while (1) {
            int rem, res = 0;   
            if(n < 10 && n != 1 && n != 7){
                return false;
            }
            while (n > 0){
                rem = n % 10;
                n /= 10;
                res += (rem * rem);
            }

            if (res == 1){
                return true;
            }
            n = res;
        }
    }
};