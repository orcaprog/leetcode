class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return 0
        mid = 0;
        r = 0
        n = x
        while n > 0:
            mid = n % 10
            r = (r * 10 )+ mid
            n = n/10
        if r == x:
            return 1
        return 0
        