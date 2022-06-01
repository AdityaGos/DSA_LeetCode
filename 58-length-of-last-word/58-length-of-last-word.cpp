class Solution {
public:
    int lengthOfLastWord(string s) {
        string s2="",s3="";
        int ans=0,sz=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '){ if(s2.size()>0){ s3=s2; } s2="";}
            else {s2+=s[i];}
            
        }
     ans=s3.size();
        if(s2.size()>0){ return s2.size(); }
        return ans;
    }
};