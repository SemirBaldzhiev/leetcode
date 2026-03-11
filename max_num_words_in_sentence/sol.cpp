#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        
        int n = sentences.size();
        int m = 0;
        int max = 0, currCnt = 1;
        for (int i = 0; i < n; ++i) {

            m = sentences[i].length();
            
            for (int j = 0; j < m; ++j) {
                if (sentences[i][j] == ' ') {
                    ++currCnt;
                }
            }

            if (currCnt > max) {
                max = currCnt;
            }
            currCnt = 1;
        }

        return max;
    }
};