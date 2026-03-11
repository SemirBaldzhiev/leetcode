#include <iostream>
#include <vector>

class Solution {
public:
    int xorOperation(int n, int start) {
        std::vector<int> arr;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            arr.push_back(start+2*i);
        }

        for (int num : arr) {
            ans ^= num;
        }

        return ans;
    }
};