/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    bool canConstruct(std::string ransomNote, std::string magazine)
    {
        for (char ch : ransomNote)
        {
            if (magazine.find(ch) != std::string::npos)
                // Removing char from the magazine
                magazine[magazine.find(ch)] = ' ';
            else
                return false;
        }
        return true;
    }
};
// @lc code=end
