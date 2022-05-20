class Solution {
public:
    int firstUniqChar(string s) {
        int ans=INT_MAX,mini=INT_MAX;
        int freq[26];
        memset(freq, -1, sizeof(freq));
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]-'a']>=0){ freq[s[i]-'a']=-2; }
            else if(freq[s[i]-'a']!=-2) freq[s[i]-'a']=i;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]>=0){ ans=min(ans,freq[i]); }
            cout<<freq[i]<<" ";
        }
        if(ans==INT_MAX){ return -1; }
        return ans;
    }
};