/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */
#include "cppstd.h"
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    // Memory leaks are here! :D
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *fake_head = head;
        ListNode *tmp = head;
        while (tmp && tmp->next)
        {
            if (tmp->val == tmp->next->val)
                tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        }
        return fake_head;
    }
};
// @lc code=end
