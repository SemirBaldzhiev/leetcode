#include <iostream>
#include "stdint.h"

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        for (int i = 0; i < 16; i++){
            int bit1 = !!(1 & (n >> i));
            int bit2 = !!(1 & (n >> (31 - i)));
            
            if (bit1){
                n |= 1 << (31 - i);
            }
            else {
                n &= ~(1 << (31 - i)); 
            }
            
            if (bit2){
                n |= 1 << i;
            }
            else {
                n &= ~(1 << i);
            }
        }
        
        return n;
    }
};