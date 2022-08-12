/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */
#include "cppstd.h"
// @lc code=start
class Solution
{
public:
    std::string addStrings(std::string num1, std::string num2)
    {
        int index1 = num1.size() - 1, index2 = num2.size() - 1;
        int carry = 0;
        std::string answer;

        while (index1 >= 0 || index2 >= 0 || carry)
        {
            int n1 = (index1 >= 0) ? num1[index1--] - '0' : 0;
            int n2 = (index2 >= 0) ? num2[index2--] - '0' : 0;
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            answer.insert(answer.begin(), (sum % 10) + '0');
        }
        return answer;
    }
};
// @lc code=end
