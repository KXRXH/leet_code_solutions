/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include "cppstd.h"
// @lc code=start
#define u_sint unsigned short int

class Solution
{
public:
    int romanToInt(std::string s)
    {
        u_sint sum = 0;
        u_sint prev = 0;
        for (u_sint i = 0; i < s.size(); i++)
        {
            u_sint cur = char_map[s[i]];
            sum += cur;
            if (prev < cur)
                sum -= prev * 2;
            prev = cur;
        }
        return sum;
    }

private:
    std::unordered_map<char, u_sint> char_map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
};