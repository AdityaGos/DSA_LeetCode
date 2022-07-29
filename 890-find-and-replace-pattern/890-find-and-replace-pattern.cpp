class Solution {
public:
    
    string getPattern(string s)
    {
        string ans="";
         map<char,char> mp;
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]='a'+j;
                j++;
            }
            ans.push_back(mp[s[i]]);
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>  answer;
        string patt=getPattern(pattern);
        for(int i=0;i<words.size();i++)
        {
            string temp=getPattern(words[i]);
            if(patt==temp)
            {
                answer.push_back(words[i]);
            }
        }
        return answer;
    }
};