class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0,cur=1,count=0;
       for(int i=1;i<s.size();i++)
       {
           if(s[i]!=s[i-1])
           {
               count+=min(prev,cur);
               // cout<<"min"<<min(prev,cur)<<" count= "<<count;
               prev=cur;
               cur=1;
           }
           else{ cur++;}
       }
        return count+=min(prev,cur);
    }
};