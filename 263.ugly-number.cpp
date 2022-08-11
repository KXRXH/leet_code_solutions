/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    bool isUgly(int num)
    {
        int arr[3] = {2, 3, 5};
        for (int i : arr)
            while (num % i == 0 && num)
                num /= i;
        return num == 1;
    }
};
// @lc code=end