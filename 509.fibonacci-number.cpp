/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        return F(n);
    }

private:
    int F(int n)
    {
        if (n <= 1)
            return n;
        int first, second;
        first = F(n - 1);
        second = F(n - 2);
        return first + second;
    }
};
// @lc code=end
