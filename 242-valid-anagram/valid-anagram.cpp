class Solution {
public:
    bool isAnagram(string s, string t) {
        
    map<char, int> mp1;
    map<char, int> mp2;
    if(s.size() !=  t.size())
    {
        return false;
    }
    int i =0 ;
    while(s[i])
    {
        mp1[s[i]] += 1; 
        mp2[t[i]] += 1; 
        i++;
    }
    map<char, int>::iterator it1 = mp1.begin();
    map<char, int>::iterator it2 = mp2.begin();
    if(mp1.size() > mp2.size())
    {
        return false;
    }
    while (it2 != mp2.end()) 
    {
    
        if(it2->first != it1->first ||it2->second < it1->second )
        {
            return false;
        }
        it2++;
        it1++;
    }
        return true;
    }
};