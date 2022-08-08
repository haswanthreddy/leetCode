from ast import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            to_find = target - nums[i]
            
            if(to_find in hashmap):
                return [hashmap[to_find],i]
            hashmap[nums[i]] = i
        