class Solution {
public:
    void helper(vector<vector<int>> & ans,vector<int> &ds, vector<int> & nums,int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                ds.push_back(nums[i]);
                helper(ans,ds,nums,freq);
                ds.pop_back();
                freq[i]=0;
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        memset(freq,0,sizeof(freq));
        helper(ans,ds,nums,freq);
        return ans;
    }
};