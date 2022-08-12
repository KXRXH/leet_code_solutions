/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(std::string word)
    {
        auto is_upper = [](char ch){return std::isupper(ch);};
        auto is_lower = [](char ch){return std::islower(ch);};
        return (std::all_of(word.begin(), word.end(), is_upper) || std::all_of(word.begin() + 1, word.end(), is_lower));
    }
};
// @lc code=end
