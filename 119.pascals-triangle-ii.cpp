/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::vector<int> getRow(int rowIndex)
    {

        std::vector<std::vector<int>> triangle(rowIndex + 1);
        triangle[0] = {1};
        for (int i = 1; i <= rowIndex; i++)
        {
            std::vector<int> row = {1};
            auto prev = triangle[i - 1];
            for (int k = 1; k < prev.size(); k++)
            {
                row.push_back(prev[k - 1] + prev[k]);
            }
            row.push_back(1);
            triangle[i] = row;
        }
        return triangle[rowIndex];
    }
};
// @lc code=end
