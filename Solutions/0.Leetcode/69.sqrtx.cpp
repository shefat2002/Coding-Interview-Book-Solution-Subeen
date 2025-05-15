class Solution {
public:
    int mySqrt(int x) {
        //O(n)
        long long i=0;
        while(i*i<=x){
            if(i*i==x)return i;
            i++;
        }
        return i-1;
    }
};

class Solution {
public:
    int mySqrt(int x) {
        //O(log n)
        if(x<=1)return x;
        long long l=1,r = x,mid;
        while(l<=r){
            mid = (l+r)/2;
            long long i = (long long)mid*mid;
            if(i == x) return mid;
            if(i > x) r = mid-1;
            else l = mid+1;
        }
        return r;        
    }
};



