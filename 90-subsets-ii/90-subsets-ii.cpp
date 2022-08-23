class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums,int ind)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
            {
                continue;
            }
            ds.push_back(nums[i]);
            helper(ans,ds,nums,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        helper(ans,ds,nums,0);
        return ans;
        
    }
};