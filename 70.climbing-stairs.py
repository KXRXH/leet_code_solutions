#
# @lc app=leetcode id=70 lang=python3
#
# [70] Climbing Stairs
#

# @lc code=start
class Solution:
    from functools import lru_cache
    @lru_cache(None)
    def f(self, x, y):
        if x == y:
            return 1
        elif x > y:
            return 0;
        return self.f(x + 1, y) + self.f(x + 2, y)
        
    def climbStairs(self, n: int) -> int:
        return self.f(0, n)
# @lc code=end

