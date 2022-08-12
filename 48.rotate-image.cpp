/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    void rotate(std::vector<std::vector<int>> &matrix)
    {
        size_t matrix_size = matrix.size();
        for (int i = 0; i < matrix_size; i++)
        {
            for (int j = i; j < i; j++)
            {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < matrix_size; i++)
            std::reverse(matrix[i].begin(), matrix[i].end());
    }
};
// @lc code=end
