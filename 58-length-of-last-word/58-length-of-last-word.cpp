class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool flag=true;
        for(int i =s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && flag){ continue;}
            else if(s[i]!=' '){ flag=false; count++;}
            else{ break;}
        }
        return count;
    }
};