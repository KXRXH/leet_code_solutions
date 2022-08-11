/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    void reverseString(std::vector<char> &s)
    {
        int start = 0, end = s.size() - 1;
        while (start < end)
        {
            char buff = s[end];
            s[end--] = s[start];
            s[start++] = buff;
        }
    }
};
// @lc code=end
