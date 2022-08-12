#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <unordered_map>
#include <cmath>
<<<<<<< HEAD
#include <cstring>
#include <cctype>

=======
>>>>>>> 244573b3d6677cff79f6bcd5a2972c6554b32f92

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};