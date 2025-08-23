class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        seen = {}

        for i, num in enumerate(nums):
            diff = target - num
            print(i)
            if diff in seen:
                return [seen[diff], i]
            seen[num] = i

        return result
            
        