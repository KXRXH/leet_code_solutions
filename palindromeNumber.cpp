#include <String>
#include <iostream>

class Solution
{
  public:
    bool isPalindrome(int x)
    {
        std::string str = std::to_string(x);
        int str_size = str.length();
        for (int i = 0; i <= str_size / 2; i++)
        {
            if (str[str_size - 1 - i] != str[i])
            {
                return false;
            }
        }
        return true;
    }
};
