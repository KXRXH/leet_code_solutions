/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    int singleNumber(std::vector<int> &nums)
    {
        int answer = 0;
        for (int n : nums)
            answer ^= n; // XOR
        return answer;
    }
};
// @lc code=end
