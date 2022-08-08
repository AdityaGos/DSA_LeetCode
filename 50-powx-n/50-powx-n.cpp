class Solution {
public:
    double helper(double x,long n)
    {
        if(n==0){ return 1; }
         double sum=helper(x,n/2);
        if(n%2==1){ return sum*sum*x;}
        return sum*sum;
    }
    double myPow(double x, int n) {
         double ans=helper(x,abs(n));
        if(n<0){ return (1/ans);}
        return ans;
    }
};