/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode *head)
    {
        std::stack<unsigned short> stack_of_values;
        ListNode *tmp = head;
        while (tmp)
        {
            stack_of_values.push(tmp->val);
            tmp = tmp->next;
        }
        delete tmp;
        while (head)
        {
            if (head->val != stack_of_values.top())
            {
                return false;
            }
            stack_of_values.pop();
            head = head->next;
        }
        return true;
    }
};
// @lc code=end
