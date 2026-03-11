#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> decode(std::vector<int>& encoded, int first) {
        int n = encoded.size();
        std::vector<int> ans(n+1);
        ans[0] = first;
        for (int i = 0; i < n; ++i) {
            ans[i+1] = ans[i] ^ encoded[i]; 
        }

        return ans;
    }
};