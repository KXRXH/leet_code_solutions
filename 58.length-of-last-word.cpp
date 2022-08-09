/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        int c = 0;
        int last_word;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                c++;
            }
            else
            {
                if (c)
                    return c;
            }
        }
        return c;
    }
};
// @lc code=end
