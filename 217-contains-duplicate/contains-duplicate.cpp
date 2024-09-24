
#include <vector>
#include <iostream>
#include <algorithm>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) 
    {
        std::vector<int>::iterator ptr; 
        std::vector<int>::iterator f; 
        std::unordered_set<int> hashset;
        for ( ptr = nums.begin(); ptr != nums.end() ; ptr++)
        {
          
              if (hashset.find(*ptr) != hashset.end())
              {
                return true;
              }
              hashset.insert(*ptr);
        }
        return false;
    }
};