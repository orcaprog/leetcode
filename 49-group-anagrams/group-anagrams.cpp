class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>  g;
        vector<string> hold = strs;
        map<string,vector<string>> mp;
        for(int i = 0; i < hold.size();i++){
            sort(hold[i].begin(), hold[i].end());
            mp[hold[i]].push_back(strs[i]);
      
        }
        std::map<std::string, std::vector<std::string>>::iterator it = mp.begin();
        while(it != mp.end())
        {
            g.push_back(it->second);
            it++;
        }
        return g;
    }
};