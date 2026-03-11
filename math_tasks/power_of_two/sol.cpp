#include <iostream>

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    }

    while (n != 1) {
        if (n % 2 != 0 || n == 0) {
            return false;
        }
        
        n /= 2;
    }

    return true;
}

// ########TEST CASES############
// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1

// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16

// Example 3:
// Input: n = 3
// Output: false

int main() {

    std::cout << "Example 1 Output: " << std::boolalpha << isPowerOfTwo(1) << std::endl;
    std::cout << "Example 2 Output: " << std::boolalpha << isPowerOfTwo(16) << std::endl;
    std::cout << "Example 2 Output: " << std::boolalpha << isPowerOfTwo(3) << std::endl; 

    return 0;
}