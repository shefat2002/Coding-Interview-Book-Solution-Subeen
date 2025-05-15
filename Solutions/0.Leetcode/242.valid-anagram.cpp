class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>sf(26,0), tf(26,0);
        for(int i = 0; i < s.size() ;i++){
            sf[s[i]-'a']++;tf[t[i]-'a']++;
        }
        return sf == tf;
    }
};