from typing import List

class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        row1 = "qwertyuiop"
        row2 = "asdfghjkl"
        row3 = "zxcvbnm"
        return [w for w in words if len(set(w.lower()+row1)) == len(row1) or 
                                    len(set(w.lower()+row2)) == len(row2) or 
                                    len(set(w.lower()+row3)) == len(row3)]