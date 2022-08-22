class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)return false;
        if(n==1){ return true;}
        int posOne=0,count1=0,pos=1;
        while(n)
        {
            if(n&1){ count1++; posOne=pos;}
            n>>=1; pos++;
        }
        return count1==1 && (posOne&1);
        
    }
};