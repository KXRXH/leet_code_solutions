/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        int next;
        int digits_size = digits.size();
        digits[digits_size - 1]++;
        for (int i = digits_size - 1; i >= 0; i--)
        {
            next = digits[i] / 10;
            digits[i] %= 10;
            if (!next)
                break;
            if (!i)
            {
                digits.insert(digits.begin(), next);
            }
            else
            {
                digits[i - 1] += next;
            }
        }
        return digits;
    }
};
// @lc code=end