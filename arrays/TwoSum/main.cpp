#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> prev_nums;
        
        for (int i = 0; i < nums.size(); i++) {
            int to_find = target - nums[i];
            
            if (prev_nums.count(to_find)){
                return {prev_nums[to_find] , i};
            } 
            
            prev_nums[nums[i]] = i;
        }

        return {};
    }
};