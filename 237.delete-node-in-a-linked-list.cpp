/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */
#include "cppstd.h"
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *tmp_prev = node;
        ListNode *tmp = node;
        while (tmp->next)
        {
            tmp->val = tmp->next->val;
            tmp_prev = tmp;
            tmp = tmp->next;
        }
        delete tmp_prev->next;
        tmp_prev->next = nullptr;
    }
};
// @lc code=end
