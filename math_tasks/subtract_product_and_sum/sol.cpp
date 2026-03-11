#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int prod = 1;
        int sum = 0;
        int num = 0;
        while (n != 0) {
            num = n % 10;
            prod *= num;
            sum += num;
            n /= 10;
        }

        return prod - sum;
    }
};