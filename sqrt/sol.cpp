#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        long squareroot = 0;
        
        while (squareroot * squareroot < x){
            ++squareroot;
        }
        
        if (squareroot * squareroot > x) {
            --squareroot;
        }
        
        return squareroot;
    }
};