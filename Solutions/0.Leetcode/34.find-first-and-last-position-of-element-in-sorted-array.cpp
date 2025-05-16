//O(n)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start =-1,end =-1 ;
        for(int i =0 ; i< nums.size() ; i++){
            if(target== nums[i]){
                end = i;
                if(start==-1)start = i;
            }
        }
        return {start,end};
    }
};

//O(log n)
class Solution {
public:
    int lowerbound(vector<int>& a, int target){
        int l= 0, r = a.size() -1;
        while(l<=r){
            int mid = (l+r)>>1; // left shift (divides by 2)
            if(a[mid] < target)l = mid+1;
            else r = mid -1;
        }
        return l;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int start ,end ;
        start = lowerbound(nums,target);
        end = lowerbound(nums,target+1) -1;
        if(start <nums.size() && nums[start] == target)
            return {start,end};
        return {-1, -1};
    }
};