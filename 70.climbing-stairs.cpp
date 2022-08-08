/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
#include "iostream"

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        long long a = 1, b = 1;
        while (n--) {
            a = (b += a) - a;
        }
        return a;
    }
};
// @lc code=end

