#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
 public:
  // brute force
  vector<int> twoSum_brute(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size() - 1; i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if ((nums[i] + nums[j]) == target) {
          return {i, j};
        }
      }
    }
    return {-1, -1};
  }
  // by map (could be faster)
  vector<int> twoSum_better(vector<int>& nums, int target) {
    std::map<int, int> nums_map;
    for (int i = 0; i < nums.size(); i++) {
      nums_map[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
      int comp = target - nums[i];
      if (nums_map.contains(comp) && nums_map[comp] != i) {
        return {i, nums_map[comp]};
      }
    }
    return {-1, -1};
  }
};
