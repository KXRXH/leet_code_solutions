/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::string convertToBase7(int num)
    {
        if (!num)
            return "0";
        std::string result = "";
        int edit_num = std::abs(num);
        while (edit_num > 0)
        {
            char next_char = edit_num % 7 + '0';
            result = next_char + result;
            edit_num /= 7;
        }
        if (num < 0)
            result = '-' + result;
        return result;
    }
};
// @lc code=end
