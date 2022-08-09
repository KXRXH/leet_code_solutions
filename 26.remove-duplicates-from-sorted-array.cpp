/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        int c = 0;
        int j = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j++] = nums[i];
                c++;
            }
        }
        return ++c;
    }
};
// @lc code=end
