class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        adddic = {}
        for i, num in enumerate(nums):
            deff = target - num
            if deff in adddic:
                return [adddic[deff],i]
            adddic[num] =i 

        return []