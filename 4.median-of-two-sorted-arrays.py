#
# @lc app=leetcode id=4 lang=python3
#
# [4] Median of Two Sorted Arrays
#

# @lc code=start
class Solution:
    # !NOT 0(log (m+n))
    def findMedianSortedArrays(self, nums1, nums2) -> float:
        size = len(nums1) + len(nums2)
        nums1 += nums2
        nums1.sort()
        if size % 2:
            return nums1[size // 2]
        else:
            return (nums1[size // 2 - 1] + nums1[size // 2]) / 2

# @lc code=end
