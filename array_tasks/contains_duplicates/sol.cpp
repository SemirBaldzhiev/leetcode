#include <iostream>
#include <vector>
#include <algorithm>

bool containsDuplicate(std::vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    int size = nums.size();
    
    for (int i = 0; i < size - 1; i++){
        if (nums[i] == nums[i + 1]){
            return true;
        }
    }
    
    return false;
}

int main() {
    return 0;
}