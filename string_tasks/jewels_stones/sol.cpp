#include <iostream>
#include <string>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int ans = 0;

        for (int i = 0; i < jewels.length(); i++) {
            for (int j= 0; j < stones.length(); j++) {
                if (jewels[i] == stones[j]) {
                    ans++;
                }
            } 
        }

        return ans;
    }
};