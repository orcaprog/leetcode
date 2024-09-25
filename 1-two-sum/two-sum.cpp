class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
            vector<int>::iterator it;
            vector<int>::iterator itt;
            vector<int> result;
            it = nums.begin();

            while(it!= nums.end())
            {
                itt = nums.begin();
                while(itt != nums.end())
                {
                    if(itt != it)
                    {
                        if((*itt + *it) == target)
                        {
                            result.push_back(it - nums.begin() );
                            result.push_back(itt -nums.begin());
                            return result;
                        }
                    
                    }  
                      itt++;
                }
                it++;
            }
            return result;
       
    }
};