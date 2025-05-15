class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i =0 ; i< n/2 ;i++){
            swap(s[i], s[n-1-i]);
        }
    }
};


//alternate solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l =0,r=s.size()-1;
        while(l<r) swap(s[l++], s[r--]);
    }
};