/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::vector<std::string> fizzBuzz(int n)
    {
        std::vector<std::string> result;
        for (int i = 1; i <= n; i++)
        {
            switch (3 * (i % 3 == 0) + 5 * (i % 5 == 0))
            {
            case 0:
                result.push_back(std::to_string(i));
                break;
            case 3:
                result.push_back("Fizz");
                break;
            case 5:
                result.push_back("Buzz");
                break;
            default: // 8
                result.push_back("FizzBuzz");
                break;
            }
        }
        return result;
    }
};
// @lc code=end
