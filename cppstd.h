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
#include <cstring>
#include <cctype>



struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
