class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto x:mp)
        {
            if(k==0){
                if(x.second>1){ count++;}
            }
            else if(mp.count(x.first+k))
            {
                count++;
            }
        }
        return count;
    }
};