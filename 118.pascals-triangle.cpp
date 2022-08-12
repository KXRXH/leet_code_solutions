/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::vector<std::vector<int>> generate(int numRows)
    {
        std::vector<std::vector<int>> result(numRows);
        result[0] = {1};
        for (int i = 1; i < numRows; i++)
        {
            std::vector<int> row = {1};
            auto prev = result[i - 1];
            for (int k = 1; k < prev.size(); k++)
            {
                row.push_back(prev[k - 1] + prev[k]);
            }
            row.push_back(1);
            result[i] = row;
        }
        return result;
    }
};
// @lc code=end
