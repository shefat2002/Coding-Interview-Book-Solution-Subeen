/*
Without DP
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long ans = -100000000;
        long long temp=0;

        for(int i =0 ; i< nums.size() ; i++){
            temp+=nums[i];
            ans = max(temp,ans);
            if(temp<0)temp=0;
        }
        return ans;
    }
};


/*
With DP
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    //dp solution
    int maxSubArray(vector<int>& nums) {
        vector<int> sum(nums);
        for(int i = 1 ; i< nums.size() ; i++){
            sum[i] = max(nums[i], sum[i-1]+ nums[i]);
        }
        return *max_element(sum.begin(),sum.end());
    }
};