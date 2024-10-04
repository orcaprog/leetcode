class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> vec(nums.size()+1);
        map<int,int> mp;
        vector<int> res ;
        for (int  it : nums) { 
            mp[it] +=1;
        } 
        map<int, int>::iterator it = mp.begin();
        while (it != mp.end()) {
            vec[it->second].push_back(it->first);

            ++it;
        }
        for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
                for(int n : *it){
                    res.push_back(n);
                    if(res.size() == k)
                        return res;
                }
        }
    return res;

    }
};