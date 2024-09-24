class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()){return false;} 
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    size_t found = s.find(t);
    if (found != string::npos)
    {
        return true;
    }
    return false;
    }
};