/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;
        // 1162261467 is max power of three for int (3 ^ 19)
        return 1162261467 % n == 0;
    }
};
// @lc code=end
