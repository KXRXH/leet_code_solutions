/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
#include <iostream>

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        // Find root of a number using Newton’s method
        long r = x;
        while (r * r > x)
            r = (r + x / r) / 2;
        return r;
    }
};
// @lc code=end