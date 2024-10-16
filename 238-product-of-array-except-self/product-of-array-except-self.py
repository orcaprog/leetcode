class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        prefixx = []
        suffix = []
        hold = 1
        for n in nums :
            hold = hold * n
            prefixx.append(hold)
        hold= 1
        for n in reversed(nums):  
            hold = hold * n
            suffix.insert(0, hold)
        res =[]
        for i,n in enumerate(nums):
            if i == 0:
                pr = 1
            else :
                pr = prefixx[i -1]

            if i ==  len(nums) - 1:
                suf = 1
            else:
                suf = suffix[i+1]
            res.append(pr * suf)
        return res
            

