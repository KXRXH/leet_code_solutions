/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        int mid;
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            (nums[mid] > target) ? end = mid - 1 : start = mid + 1;
        }
        return start;
    }
};
// @lc code=end
