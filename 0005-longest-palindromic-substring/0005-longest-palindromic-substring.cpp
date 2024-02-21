class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int len=0;
        int sz=s.size();
        if(sz<2){ return s;}
        for(int i=0;i<s.size();i++)
        {
            int l=i,r=i;
            while(l>=0 && r<sz && s[l]==s[r])
            {
                if((r-l+1)>len){ len=r-l+1;res=s.substr(l,len);  }
                l-=1;
                r+=1;
            }
            
            l=i,
            r=i+1;
            while(l>=0 && r<sz && s[l]==s[r])
            {
                if((r-l+1)>len){ len=r-l+1;res=s.substr(l,len); }
                l-=1;
                r+=1;
            }
        }
      
      
        return res;
    }
};