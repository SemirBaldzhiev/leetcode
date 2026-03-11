from typing import List

class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        sort_arr = sorted(set(arr))
        rank_map = {sort_arr[i]: i+1 for i in range(len(sort_arr))}
        return [rank_map[x] for x in arr]
        