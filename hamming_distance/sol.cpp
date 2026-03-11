#include <iostream>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int countSetBits  = 0;
        while (n > 0) {
            countSetBits += (n & 1);
            n >>= 1;
        }

        return countSetBits;

    }
};