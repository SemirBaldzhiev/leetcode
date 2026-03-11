#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
     
        int fstNum = 1;
        int sndNum = 1;
        
        for (int i = 0; i < n - 1; i++){
            int temp = fstNum;
            fstNum = fstNum + sndNum;
            sndNum = temp;
        }
        
        return fstNum;
    }
    
};