class Solution {
public:
    int mySqrt(int x) {
        if(x==0){ return 0;}
        long long low=1,high=x,mid=0;
        int ans=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid*mid==x){ return mid;}
            if(mid*mid<=x){ low=mid+1; ans= mid;}
            else { high=mid-1;}
        }
        return ans;
    }
};