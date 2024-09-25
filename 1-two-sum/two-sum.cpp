class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> mp;
            vector<int> vec;
            int deff;
            for (int i = 0; i < nums.size(); ++i)
            {
                int num = nums[i];
                deff = target - num;
                auto it = mp.find(deff) ;
                if(it != mp.end())
                {
                    vec.push_back(it->second);
                    vec.push_back(i);
                    return vec;
                }
                mp[num] = i;
            }
            return vec;
       
    }
};