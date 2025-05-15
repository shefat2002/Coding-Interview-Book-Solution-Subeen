class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i =0 ; i< s.size(); i++){
            if(isalnum(s[i]))t+=tolower(s[i]);
        }
        string tt =t;
        reverse(tt.begin(), tt.end());
        if(tt==t)return true;
        return false;
    }
};